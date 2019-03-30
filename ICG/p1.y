%{
#include "ICG.h"

// #define YYSTYPE char*
#include "lex.yy.c"

%}
%union {
    char *str;
    int intval;

}

%token <str> IF ELSE INT CHAR VOID CONTINUE BREAK MAIN FOR WHILE RETURN STRING_CONSTANT INTEGER_CONSTANT FLOAT_CONSTANT IDENTIFIER INC DEC PLUSEQ 
%left '>' '<' '=' PLUSEQ
%left '+' '-' 
%left '*' '/' '%' 
%left INC DEC

%type <str> data_type
%type <intval> Const_Expression Param_list ListOfParams arg_list Expression if_tac_print else_tac_print while_tac_print while_notsat_tac_print for_label for_cond_exit

%nonassoc IfwithoutElse
%nonassoc ELSE




%%
Global   
    : func_dec Global
    | func_def Global
    | var_dec ';' Global 
    |
    ; 

func_dec 
    :   data_type IDENTIFIER ParenthesisOpen Param_list ParenthesisClose ';'             { redeclaration($2); node* t = insert($2, $1, yylineno, curr_scope); t->num_params = $4; }
    |   data_type IDENTIFIER ParenthesisOpen ParenthesisClose ';'                        { redeclaration($2); node* t = insert($2, $1, yylineno, curr_scope); t->num_params = 0 ; }
    ;

ParenthesisOpen
    : '('                                                                   { curr_scope++; }
    ;

ParenthesisClose
    : ')'                                                                   { curr_scope--; }
    ;
var_dec
    : data_type var_list  
    ;

var_list
    : IDENTIFIER                                        { redeclaration($1); insert($1,type, yylineno, curr_scope); }
    | IDENTIFIER ',' var_list                           { redeclaration($1); insert($1,type, yylineno, curr_scope); }
    | IDENTIFIER '=' Expression                         { redeclaration($1); insert($1,type, yylineno, curr_scope); 
                                                            reg_node *op1 = pop(); 
                                                            curr_buffer = get_buffer_node();
                                                            sprintf(curr_buffer->code, "%s = %s",$1, reg_name(op1));
                                                        }
      ',' var_list
    | IDENTIFIER '=' Expression                         {  redeclaration($1); insert($1,type, yylineno, curr_scope); 
                                                            reg_node *op1 = pop();  
                                                            curr_buffer = get_buffer_node();
                                                            sprintf(curr_buffer->code, "%s = %s",$1, reg_name(op1));
                                                        }  
    | IDENTIFIER '[' Const_Expression ']'               { array_size_check($3);  redeclaration($1); insert($1,type, yylineno, curr_scope); }
    | IDENTIFIER '[' Const_Expression ']' ',' var_list  { array_size_check($3);  redeclaration($1); insert($1,type, yylineno, curr_scope); }
    ;

Const_Expression
    : INTEGER_CONSTANT                                  { $$ = atoi($1); }
    | Const_Expression '+' Const_Expression             { $$ = $1 + $3; }
    | Const_Expression '-' Const_Expression             { $$ = $1 - $3; }
    | Const_Expression '*' Const_Expression             { $$ = $1 * $3; }
    | Const_Expression '/' Const_Expression             { divByZero($3); $$ = $1 / $3; }
    | Const_Expression '%' Const_Expression             { $$ = $1 % $3; }
    | Const_Expression '>' Const_Expression             { $$ = $1 > $3; }
    | Const_Expression '<' Const_Expression             { $$ = $1 < $3; }
    ;

Expression
    : Term                                           { $$ =0 ; }
    | Expression '<' Expression                      { lvalue_check($3); $$=0; 

                                                       Expr_tac("<");
                                                     }
    | Expression '>' Expression                      { lvalue_check($3); $$=0; 
                                                       Expr_tac(">");

                                                     }
    | Expression '+' Expression                      { lvalue_check($3); $$=0;
                                                       Expr_tac("+");
                                                     }
    | Expression '-' Expression                      { lvalue_check($3); $$=0; 
                                                      Expr_tac("-");
                                                     }
    | Expression '*' Expression                      { lvalue_check($3); $$=0;
                                                       Expr_tac("*");
                                                     }
    | Expression '/' Expression                      { lvalue_check($3); $$=0; 
                                                      Expr_tac("/");
                                                     }
    | Expression '%' Expression                      { lvalue_check($3); $$=0; 
                                                       Expr_tac("%");
                                                     }
    | IDENTIFIER '=' Expression                      { $$ = 1; 
                                                       reg_node *op1 = pop(); 
                                                       reg_node *temp = newnode($1,-1);
                                                       ICG_stack[++ICG_tos] = temp; 
                                                       curr_buffer = get_buffer_node();
                                                       sprintf(curr_buffer->code, "%s = %s",reg_name(temp), reg_name(op1));
                                                     }
    | Expression PLUSEQ Expression                   { $$ = 1; }
    |'(' Expression ')'                              { $$ = 0; }
    | '-' Expression                                 { $$ = 0; }
    | '+' Expression                                 { $$ = 0; }
    ;

Term 
    : IDENTIFIER                                                { not_declared($1);  reg_node* temp = newnode($1,-1); ICG_stack[++ICG_tos] = temp; }
    | INTEGER_CONSTANT                                          { reg_node* temp = newnode($1,-1); ICG_stack[++ICG_tos] = temp; }
    | FLOAT_CONSTANT
    | STRING_CONSTANT
    | funcCall
    | INC IDENTIFIER                                            { not_declared($2); }
    | IDENTIFIER INC                                            { not_declared($1); }
    | IDENTIFIER DEC                                            { not_declared($1); }
    | DEC IDENTIFIER                                            { not_declared($2); }
    ;    

Param_list
    : VOID                                                      { $$ = 0; }
    | ListOfParams                                              { $$ = $1; }
    ;

ListOfParams
    : data_type IDENTIFIER ',' ListOfParams                     { void_check($1); redeclaration($2); insert($2,$1,yylineno, curr_scope); $$ = $4 +1;  }
    | data_type IDENTIFIER                                      { void_check($1); redeclaration($2); insert($2,$1,yylineno, curr_scope); $$ = 1; }
    ;

data_type
    : INT                                                       {  strcpy($$,$1); strcpy(type,$1); }  
    | CHAR                                                      {  strcpy($$,$1); strcpy(type,$1); } 
    | VOID                                                      {  strcpy($$,$1); strcpy(type,$1); }                                                  
    ;

func_def
    : data_type IDENTIFIER ParenthesisOpen Param_list ParenthesisClose
    {
        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "Function %s BEGIN",$2);
    }
    Compound_stat                                                                       { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "END %s", $2); redeclaration($2); node* t = insert($2, $1, yylineno, curr_scope); t->num_params = $4; }
    | data_type MAIN ParenthesisOpen Param_list ParenthesisClose 
    {
        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "Function %s BEGIN",$2);
    }
    Compound_stat                                                                       { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "END %s", $2); redeclaration($2); redeclaration($2); node* t = insert($2, $1, yylineno, curr_scope); t->num_params = $4; }
    | data_type IDENTIFIER ParenthesisOpen ParenthesisClose 
    {
        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "Function %s BEGIN",$2);
    }
    Compound_stat                                                                       { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "END %s", $2); redeclaration($2); redeclaration($2); node* t = insert($2, $1, yylineno, curr_scope); t->num_params = 0; }
    | data_type MAIN ParenthesisOpen ParenthesisClose 
    {
       
        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "Function %s BEGIN",$2);
        
    }
    Compound_stat                                                                       { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "END %s", $2); redeclaration($2); redeclaration($2); node* t = insert($2, $1, yylineno, curr_scope); t->num_params = 0; }
    ;


Compound_stat
    : '{'                                                       {   curr_scope++; }
        stat_list '}'                                           {   while(stack[tos]->scope == curr_scope)
                                                                        tos--;
                                                                    curr_scope--;
                                                                }
    ;
stat_list
    : single_stat stat_list
    | Compound_stat stat_list
    |
    ;

single_stat
    :  Expression ';'   { pop(); }
    |  var_dec ';'
    |  forstat
    |  while
    |  returnstat ';'
    |  ';'
    | if_stat
    | CONTINUE ';'{
        if(continueStack.top == -1){
            printf(" line no : %d, a continue statement may only be used within a loop\n", yylineno);
            exit(1);
        }

        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "GOTO L%d", continueStack.label[continueStack.top]);
    }
    | BREAK ';'{
        if(breakStack.top == -1){
            printf(" line no : %d, a break statement may only be used within a loop\n", yylineno);
            exit(1);
        }

        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "GOTO L%d", breakStack.label[breakStack.top]);
    }
    ;

while
    : WHILE while_tac_print '(' Expression ')' while_notsat_tac_print Compound_stat    { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "GOTO L%d",$2 ); curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "L%d : ",$6 ); }
    | WHILE while_tac_print '(' Expression ')' while_notsat_tac_print single_stat      { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "GOTO L%d",$2 ); curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "L%d : ",$6 ); }
    ;

while_tac_print
    :
    {

    curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "L%d : ",label_num );
    continueStack.label[++continueStack.top] = label_num;

        $$ = label_num++;
    }
    ;

while_notsat_tac_print
    :
    {
        reg_node* op1 = pop();
        
        reg_node* temp = newnode("t", ++t_ctr);

        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "%s = NOT %s", reg_name(temp), reg_name(op1));


        t_ctr--;

        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "IF %s GOTO L%d", reg_name(temp), label_num);
        breakStack.label[++breakStack.top] = label_num;


        $$ = label_num;
        label_num++;
 
    }
    ;



if_stat
    : IF '(' Expression ')' if_tac_print  Compound_stat                                      { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",$5 );}  %prec IfwithoutElse
    | IF '(' Expression ')' if_tac_print  single_stat                                        { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",$5 );}  %prec IfwithoutElse
    | IF '(' Expression ')' if_tac_print  Compound_stat 
      ELSE else_tac_print 
        {
            curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",$5 );
        }
     Compound_stat                                                                           { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",$8 );}   %prec ELSE
    | IF '(' Expression ')' if_tac_print  single_stat   
      ELSE else_tac_print 
        {
            curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",$5 );
        }
      Compound_stat                                                                          { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",$8 );}   %prec ELSE
    | IF '(' Expression ')' if_tac_print  Compound_stat ELSE else_tac_print 
        {
            curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",$5 );
        }
      single_stat                                                                            { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",$8 );}   %prec ELSE
    | IF '(' Expression ')' if_tac_print  single_stat   ELSE else_tac_print 
        {
            curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",$5 );
        }
     single_stat                                                                             { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",$8 );}   %prec ELSE
    ;

if_tac_print
    : 
    {
        reg_node* op1 = pop();
        reg_node* temp = newnode("t", ++t_ctr);
        curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"%s = NOT %s",reg_name(temp), reg_name(op1));

        curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"IF %s GOTO L%d",reg_name(temp), label_num);
        t_ctr--;

        $$ = label_num;
        label_num++;

    }
    ;


else_tac_print
    :
    {
        curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"GOTO L%d",label_num);
        $$ = label_num;
        label_num++;
    }
    ;

forstat
    : FOR '(' var_dec    ';' for_label Expression ';' for_cond_exit Expression')' { tac.top++; } Compound_stat { for_tac($5, $8); }
    | FOR '(' Expression ';' for_label Expression ';' for_cond_exit Expression')' { tac.top++; } Compound_stat { for_tac($5, $8); }
    | FOR '(' var_dec    ';' for_label Expression ';' for_cond_exit Expression')' { tac.top++; } single_stat   { for_tac($5, $8); }
    | FOR '(' Expression ';' for_label Expression ';' for_cond_exit Expression')' { tac.top++; } single_stat   { for_tac($5, $8); }
    ;  

for_label
    : {
         curr_buffer = get_buffer_node();
         sprintf(curr_buffer->code, "L%d :", label_num);
         continueStack.label[++continueStack.top] = label_num; 
         $$ = label_num++;
      }
    ;
for_cond_exit
    : {
        reg_node *temp = pop();
        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "IF NOT %s GOTO L%d", reg_name(temp), label_num);
        breakStack.label[++breakStack.top] = label_num; 

        $$ = label_num++;
        tac.top++;

      }
    ;

returnstat
    : RETURN Expression                                         { reg_node* temp = pop(); curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"RETURN %s", reg_name(temp)); }
    | RETURN                                                    { curr_buffer = get_buffer_node(); strcpy(curr_buffer->code,"RETURN"); } 
    ;

funcCall
    : IDENTIFIER '(' arg_list ')'                               { not_declared($1); not_function($1); num_params_check($1, $3); print_arg_list($3); curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"Call %s, %d",$1, $3); }
    | IDENTIFIER '(' ')'                                        { not_declared($1); not_function($1); num_params_check($1, 0); curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"Call %s",$1);  }
    ;

arg_list
    : Expression ',' arg_list                                   { $$ = $3+1; }
    | Expression                                                { $$= 1;}
    ;
%%

void yyerror(char *s) {
 fprintf(stderr, "%s\n", s);
} 




int main()
{
    node * temp = malloc(sizeof(node));
    temp->scope =-1;
    tos++;
    stack[tos]=temp;


    tac.top = 0;
    tac.head[tac.top] = NULL;
    tac.last[tac.top] = NULL;

    breakStack.top = continueStack.top =-1;

    yyparse();
    print_tac();

//    printf("\nSymbol Table\n");

//     printSymbolTable();
   
    return 0;
}