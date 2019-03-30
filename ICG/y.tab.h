/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 259,
    INT = 260,
    CHAR = 261,
    VOID = 262,
    CONTINUE = 263,
    BREAK = 264,
    MAIN = 265,
    FOR = 266,
    WHILE = 267,
    RETURN = 268,
    STRING_CONSTANT = 269,
    INTEGER_CONSTANT = 270,
    FLOAT_CONSTANT = 271,
    IDENTIFIER = 272,
    INC = 273,
    DEC = 274,
    PLUSEQ = 275,
    IfwithoutElse = 276
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define INT 260
#define CHAR 261
#define VOID 262
#define CONTINUE 263
#define BREAK 264
#define MAIN 265
#define FOR 266
#define WHILE 267
#define RETURN 268
#define STRING_CONSTANT 269
#define INTEGER_CONSTANT 270
#define FLOAT_CONSTANT 271
#define IDENTIFIER 272
#define INC 273
#define DEC 274
#define PLUSEQ 275
#define IfwithoutElse 276

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "p1.y" /* yacc.c:1909  */

    char *str;
    int intval;


#line 102 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
