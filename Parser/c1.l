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
int                 {print(yytext); yylval = malloc(100*sizeof(char)); strcpy(yylval, yytext);    return INT;}
main                {print(yytext); yylval = malloc(100*sizeof(char)); strcpy(yylval, yytext);    return MAIN;}
for                 {print(yytext); yylval = malloc(100*sizeof(char)); strcpy(yylval, yytext);    return FOR;}
return              {print(yytext); yylval = malloc(100*sizeof(char)); strcpy(yylval, yytext);    return RETURN;}
if                  {print(yytext); yylval = malloc(100*sizeof(char)); strcpy(yylval, yytext);    return IF;}
else                {print(yytext); yylval = malloc(100*sizeof(char)); strcpy(yylval, yytext);    return ELSE;}


"#include"[ ]*"<"(_|{alpha})(_|{alphanum})*".h>"    { print(yytext);}
(_|{alpha})(_|{alphanum})*                          { print(yytext); yylval = malloc(100*sizeof(char));  strcpy(yylval, yytext); return IDENTIFIER;}
"/*"([^*]*[*]+[^/])*([^*]*[*]+)"/"                  { print("multiline ");}
"//"[^\n]*                                          { print(yytext); }
{number}+                                           { print(yytext);return INTEGER_CONSTANT;}
({number}+"."{number}*)|({number}*"."{number}+)     { print(yytext);return FLOAT_CONSTANT;}
\"[^"\n]*\" 	                                    { print(yytext);return STRING_CONSTANT;}
[-+/%=&\(\)\[\]\{\};,\<\>]                          { print(yytext);return *yytext;}

"++"                                                { return INC;}
"--"                                                { return DEC;}
"+="                                                { return PLUSEQ;}
({number})(_|{alphanum})*                          { printf("invalid identifier\n"); exit(0);}
%%


int yywrap(void) {
 return 1;
}

