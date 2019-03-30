%{
#include <stdlib.h>
int yylex();
void yyerror(char *);
#include "y.tab.h"


#define Debug 0

void print(char * s)
{
    if(Debug)
    {
        printf("%d : %s\n",yylineno, s); 
    }
}

%}


%option yylineno
number  [0-9]
alpha   [a-zA-Z]
alphanum ({number}|{alpha})

%%
\n|" "|\t           { }
int                 {print(yytext); yylval.str = malloc(100*sizeof(char)); strcpy(yylval.str, yytext);    return INT;}
char                 {print(yytext); yylval.str = malloc(100*sizeof(char)); strcpy(yylval.str, yytext);    return CHAR;}
main                {print(yytext); yylval.str = malloc(100*sizeof(char)); strcpy(yylval.str, yytext);    return MAIN;}
for                 {print(yytext); yylval.str = malloc(100*sizeof(char)); strcpy(yylval.str, yytext);    return FOR;}
return              {print(yytext); yylval.str = malloc(100*sizeof(char)); strcpy(yylval.str, yytext);    return RETURN;}
if                  {print(yytext); yylval.str = malloc(100*sizeof(char)); strcpy(yylval.str, yytext);    return IF;}
else                {print(yytext); yylval.str = malloc(100*sizeof(char)); strcpy(yylval.str, yytext);    return ELSE;}
void                {print(yytext); yylval.str = malloc(100*sizeof(char)); strcpy(yylval.str, yytext);    return VOID;}
 

"#include"[ ]*"<"(_|{alpha})(_|{alphanum})*".h>"    { print(yytext);}
(_|{alpha})(_|{alphanum})*                          { print(yytext); yylval.str = malloc(100*sizeof(char));  strcpy(yylval.str, yytext); return IDENTIFIER;}
"/*"([^*]*[*]+[^/])*([^*]*[*]+)"/"                  { print("multiline ");}
"//"[^\n]*                                          { print(yytext); }
{number}+                                           { print(yytext); print(yytext); yylval.str = malloc(100*sizeof(char)); strcpy(yylval.str, yytext); return INTEGER_CONSTANT;}
({number}+"."{number}*)|({number}*"."{number}+)     { print(yytext); print(yytext); yylval.str = malloc(100*sizeof(char)); strcpy(yylval.str, yytext); return FLOAT_CONSTANT;}
\"[^"\n]*\" 	                                    { print(yytext); print(yytext); yylval.str = malloc(100*sizeof(char)); strcpy(yylval.str, yytext); return STRING_CONSTANT;}
[-+/%=&\(\)\[\]\{\};,\<\>]                          { print(yytext);return *yytext;}

"++"                                                { return INC;}
"--"                                                { return DEC;}
"+="                                                { return PLUSEQ;}
({number})(_|{alphanum})*                          { printf("invalid identifier\n"); exit(0);}
%%


int yywrap(void) {
 return 1;
}

