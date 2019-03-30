%{
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define YYSTYPE char*
#include "lex.yy.c"
#define M 1007 

int yylex();
void yyerror(char* );
extern int yylineno;


typedef struct Node{
    char name[100];
    char type[100];
    struct Node* next;
    int lno;
}node;

char type[M];

node* symbolTable[M]={NULL};

int hash(const char s[])
{
    int i;
    int p=0;
    for(i=0;i<strlen(s);i++)
    {
        p =(p*10 + s[i])%M;
    }
    return p;
}

node* lookup(const char s[])
{
   int h= hash(s);
   int len = strlen(s);

   node *temp = symbolTable[h];
   
   while(temp !=NULL){
        if(!strcmp(s, temp->name))
            return temp;
        else
            temp=temp->next; 
   }

   return NULL;

}

void insert(const char name[], const char type[], int l )
{
    if(lookup(name)!=NULL)
        return;
    int h = hash(name);
    node* temp = malloc(sizeof(node));
    
    strcpy(temp->name, name);
    strcpy(temp->type, type);
    temp->lno = l;

    temp->next = symbolTable[h];
    symbolTable[h]=temp;
    
}


%}

%token IF ELSE INT MAIN FOR RETURN STRING_CONSTANT INTEGER_CONSTANT FLOAT_CONSTANT IDENTIFIER INC DEC PLUSEQ 
%left '>' '<' '=' PLUSEQ
%left '+' '-' 
%left '*' '/' '%' 
%left INC DEC

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
    : data_type IDENTIFIER '(' Param_list ')' ';'               { insert($2, type, yylineno);}
    | data_type IDENTIFIER '(' ')' ';'                          { insert($2, type, yylineno);}
    ;

var_dec
    : data_type var_list  
    ;

var_list
    : IDENTIFIER                                    { insert($1,type,yylineno); }
    | IDENTIFIER ',' var_list                       { insert($1,type,yylineno); }
    | IDENTIFIER '=' Expression ',' var_list        { insert($1,type,yylineno); }
    | IDENTIFIER '=' Expression                     { insert($1,type,yylineno); }
    ;

Expression
    : Term
    | Expression '<' Expression
    | Expression '>' Expression
    | Expression '+' Expression
    | Expression '-' Expression
    | Expression '*' Expression
    | Expression '/' Expression
    | Expression '%' Expression
    | Expression '=' Expression
    | Expression PLUSEQ Expression
    |'(' Expression ')'
    ;

Term 
    : IDENTIFIER
    | INTEGER_CONSTANT
    | FLOAT_CONSTANT
    | STRING_CONSTANT
    | funcCall
    | INC IDENTIFIER
    | IDENTIFIER INC
    | IDENTIFIER DEC
    | DEC IDENTIFIER
    ;    

Param_list
    : data_type IDENTIFIER ',' Param_list
    | data_type IDENTIFIER
    ;

data_type
    : INT                                           { strcpy(type,$1); }             
    ;

func_def
    : data_type IDENTIFIER '(' Param_list ')' Compound_stat      { insert($2, type, yylineno);}
    | data_type MAIN '(' Param_list ')' Compound_stat           { insert($2, type, yylineno);}
    | data_type IDENTIFIER '(' ')' Compound_stat                { insert($2, type, yylineno);}
    | data_type MAIN '(' ')' Compound_stat                      { insert($2, type, yylineno);}
    ;

Compound_stat
    : '{' stat_list '}'
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
    : IDENTIFIER '(' arg_list ')'
    | IDENTIFIER '(' ')'
    ;

arg_list
    : Expression ',' arg_list
    | Expression
    ;
%%

void yyerror(char *s) {
 fprintf(stderr, "%s\n", s);
} 


void printSymbolTable()
{  
    node* temp=NULL;
    printf("--------------------------------------------------------------\n");
    printf("%-10s|%-20s|%-30s\n", "LineNum","Name","Type");
    printf("--------------------------------------------------------------\n");
    for(int i=0;i<M;i++)
    {
        temp = symbolTable[i];

        while(temp!=NULL)
        {
            printf("%-10d|%-20s|%-30s\n",temp->lno, temp->name, temp->type );
            temp= temp->next;
        }
    }
    //printf("--------------------------------------------------------------\n");
}

int main()
{
    yyparse();
    printSymbolTable();
   
    return 0;
}