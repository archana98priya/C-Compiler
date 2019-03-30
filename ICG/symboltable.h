#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define M 1007

int yylex();
void yyerror(char *);
extern int yylineno;

typedef struct Node
{
    char name[100];
    char type[100];
    struct Node *next;
    int lno;
    int scope;
    int num_params;

} node ;
node *stack[M];
int tos = -1;

char type[M];
int curr_scope = 0;

node *symbolTable[M] = {NULL};

int hash(const char s[])
{
    int i;
    int p = 0;
    for (i = 0; i < strlen(s); i++)
    {
        p = (p * 10 + s[i]) % M;
    }
    return p;
}

node* insert(const char name[], const char type[], int l, int scope)
{
    int h = hash(name);
    node *temp = (node*)malloc(sizeof(node));

    strcpy(temp->name, name);
    strcpy(temp->type, type);
    temp->scope = scope;
    temp->lno = l;
    temp->num_params = -1;

    temp->next = symbolTable[h];
    symbolTable[h] = temp;

    stack[++tos]= temp;

    return temp;
}

void not_function(const char* name)
{
    int ptr = tos;
    while(ptr >= 0)
    {
        if(!strcmp(stack[ptr]->name, name))
        {
            if(stack[ptr]->num_params != -1)
                return ;
        }
        ptr--;
    }
    printf("line no: %d, %s not a function \n", yylineno, name);
    exit(1);

}

void divByZero(int x)
{
    if(x==0)
    {
        printf("line no. %d , div by zero\n", yylineno);
        exit(1);
    }
}

void lvalue_check(int x)
{
    if(x==1)
    {
        printf("line no: %d , lvalue required as left operand of assignment\n", yylineno);
        exit(1);
    }

}

void  num_params_check( const char* name, int num_arg )
{
    int ptr = tos;
    while (ptr >=0)
    {
        if (!strcmp(stack[ptr]->name, name))
        {
            if(stack[ptr]->num_params !=-1){
                if(stack[ptr]->num_params == num_arg)
                    return;
                else if(stack[ptr]->num_params > num_arg) 
                {
                    printf(" line no : %d, too few arguments passed to %s \n", yylineno, name);
                    exit(1);
                }
                else
                {
                    printf(" line no : %d, too many arguments passed to %s \n", yylineno, name);
                    exit(1);
                }

            }

        }
        ptr--;
    }   
}

void array_size_check(int x)
{
    if(x<0)
    {
        printf("line no.: %d , array size negative\n ", yylineno);
        exit(1);
    }
}

void void_check(const char* s )
{
    if(!strcmp(s, "void"))
    {
        printf("line no: %d, datatype can't be void\n", yylineno);
        exit(1);
    }
}

void not_declared(const char *name)
{
    int ptr = tos;
    while(ptr >= 0)
    {
        if(!strcmp(stack[ptr]->name, name))
            return;
        ptr--;
    }
    printf("line no: %d, %s has not been declared\n", yylineno, name);
    exit(1);
    
}

void redeclaration(const char *name)
{
    int ptr = tos;
    while (stack[ptr]->scope == curr_scope)
    {
        if (!strcmp(stack[ptr]->name, name))
        {
            printf(" line no : %d, Redeclaration of %s\n", yylineno, name);
            exit(1);
        }
        ptr--;
    }
    
}



void printSymbolTable()
{
    node *temp = NULL;
    printf("--------------------------------------------------------------\n");
    printf("%-10s|%-20s|%-30s|%-20s\n", "LineNum", "Name", "Type", "Scope");
    printf("--------------------------------------------------------------\n");
    for (int i = 0; i < M; i++)
    {
        temp = symbolTable[i];

        while (temp != NULL)
        {
            printf("%-10d|%-20s|%-30s|%-20d\n", temp->lno, temp->name, temp->type, temp->scope);
            temp = temp->next;
        }
    }
    //printf("--------------------------------------------------------------\n");
}
