%{
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define M 1007 
typedef struct Node{
    char name[100];
    char type[100];
    struct Node* next;
    int lno;
}node;

node* symbolTable[M]={NULL};

int hash(char s[])
{
    int i;
    int p=0;
    for(i=0;i<strlen(s);i++)
    {
        p =(p*10 + str[i])%M;
    }
    return p;
}

node* lookup(char s[])
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

void insert(char s[])
{

    int h = hash(s);
    node* temp = malloc(sizeof(node));
    
    strcpy(temp->name, s);

    temp->next = symbolTable[h];
    symbolTable[h]=temp;
    
}


%}

%token INT MAIN FOR RETURN STRING_CONSTANT INTEGER_CONSTANT IDENTIFIER INC DEC
%left '+' '-'
%left '*' '/' '%'
%left '='

%%

Global
    : FunDec Global
    | FunDef Global
    | VarDec Global
    |
    ;

FunDec
    : DataType IDENTIFIER '(' ParamList ')' ';'
    ;

VarDec
    : DataType VarList ';'
    ;

VarList
    : IDENTIFIER ',' VarList
    | IDENTIFIER '=' Expression ',' VarList
    | IDENTIFIER ';'
    | IDENTIFIER '=' Expression ';'
    ;

Expression
    : Term
    | Expression '+' Term
    | Expression '-' Term
    | Expression '*' Term
    | Expression '/' Term
    | Expression '%' Term
    | Expression '=' Term
    ;

Term
    : IDENTIFIER
    | INTEGER_CONSTANT
    | STRING_CONSTANT
    | FuncCall
    ;

ParamList
    : DataType IDENTIFIER ',' ParamList
    |
    ;

DataType
    : INT
    ;

FunDef
    : DataType IDENTIFIER '(' ParamList ')' '{' StatList '}' ';'
    ;

StatList
    : SingleStat ';' StatList
    | '{' StatList '}' StatList
    |
    ;

SingleStat
    : Expression
    | ForStat
    | VarDec
    | ReturnStat
    | FuncCall
    ;

ForStat
    : FOR '(' VarDec ';' Expression ';' Expression ')' SingleStat ';'
    | FOR '(' Expression ';' Expression ';' Expression ')' SingleStat ';'
    | FOR '(' VarDec ';' Expression ';' Expression ')' '{' StatList '}'
    | FOR '(' Expression ';' Expression ';' Expression ')' '{' StatList '}'
    ;

ReturnStat
    : RETURN Expression ';'
    | RETURN ';'

FuncCall
    : IDENTIFIER '(' ArgList ')'
    ;

ArgList
    : Expression ',' ArgList
    |
    ;
%%