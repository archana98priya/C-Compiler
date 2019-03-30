%{
#include "symboltable.h"

// #define YYSTYPE char*
#include "lex.yy.c"

%}
%union {
    char *str;
    int intval;

}

%token <str> IF ELSE INT CHAR VOID MAIN FOR RETURN STRING_CONSTANT INTEGER_CONSTANT FLOAT_CONSTANT IDENTIFIER INC DEC PLUSEQ 
%left '>' '<' '=' PLUSEQ
%left '+' '-' 
%left '*' '/' '%' 
%left INC DEC

%type <str> data_type
%type <intval> Const_Expression Param_list ListOfParams arg_list Expression

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
    | IDENTIFIER '=' Expression ',' var_list            { redeclaration($1); insert($1,type, yylineno, curr_scope); }
    | IDENTIFIER '=' Expression                         { redeclaration($1); insert($1,type, yylineno, curr_scope); }  
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
    : Term                                           { $$ =0 ;}
    | Expression '<' Expression                      { lvalue_check($3); $$=0; }
    | Expression '>' Expression                      { lvalue_check($3); $$=0; }
    | Expression '+' Expression                      { lvalue_check($3); $$=0; }
    | Expression '-' Expression                      { lvalue_check($3); $$=0; }
    | Expression '*' Expression                      { lvalue_check($3); $$=0; }
    | Expression '/' Expression                      { lvalue_check($3); $$=0; }
    | Expression '%' Expression                      { lvalue_check($3); $$=0; }
    | IDENTIFIER '=' Expression                      { $$ = 1; }
    | Expression PLUSEQ Expression                   { $$ = 1; }
    |'(' Expression ')'                              { $$ = 0; }
    ;

Term 
    : IDENTIFIER                                                { not_declared($1); }
    | INTEGER_CONSTANT
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
    : data_type IDENTIFIER ParenthesisOpen Param_list ParenthesisClose Compound_stat     { redeclaration($2); node* t = insert($2, $1, yylineno, curr_scope); t->num_params = $4; }
    | data_type MAIN ParenthesisOpen Param_list ParenthesisClose Compound_stat           { redeclaration($2); node* t = insert($2, $1, yylineno, curr_scope); t->num_params = $4; }
    | data_type IDENTIFIER ParenthesisOpen ParenthesisClose Compound_stat                { redeclaration($2); node* t = insert($2, $1, yylineno, curr_scope); t->num_params = 0; }
    | data_type MAIN ParenthesisOpen ParenthesisClose Compound_stat                      { redeclaration($2); node* t = insert($2, $1, yylineno, curr_scope); t->num_params = 0; }
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
    :  Expression ';' 
    |  var_dec ';'
    |  forstat
    |  returnstat ';'
    |  ';'
    | if_stat
    ;

if_stat
    : IF '(' Expression ')' Compound_stat                       %prec IfwithoutElse
    | IF '(' Expression ')' single_stat                         %prec IfwithoutElse
    | IF '(' Expression ')' Compound_stat ELSE Compound_stat    %prec ELSE
    | IF '(' Expression ')' single_stat ELSE Compound_stat      %prec ELSE
    | IF '(' Expression ')' Compound_stat ELSE single_stat      %prec ELSE
    | IF '(' Expression ')' single_stat ELSE single_stat        %prec ELSE
    ;


forstat
    : FOR '(' var_dec ';' Expression ';' Expression')' Compound_stat
    | FOR '(' Expression ';' Expression ';' Expression')' Compound_stat
    | FOR '(' var_dec ';' Expression ';' Expression')' single_stat
    | FOR '(' Expression ';' Expression ';' Expression')' single_stat 
    ;

returnstat
    : RETURN Expression
    | RETURN 
    ;

funcCall
    : IDENTIFIER '(' arg_list ')'                               { not_declared($1); not_function($1); num_params_check($1, $3); }
    | IDENTIFIER '(' ')'                                        { not_declared($1); not_function($1); num_params_check($1, 0); }
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

    yyparse();
   
    printSymbolTable();
   
    return 0;
}