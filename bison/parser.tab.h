/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BOOLEAN = 258,                 /* BOOLEAN  */
    DOUBLE = 259,                  /* DOUBLE  */
    INT = 260,                     /* INT  */
    LIST = 261,                    /* LIST  */
    STEP = 262,                    /* STEP  */
    TO = 263,                      /* TO  */
    FROM = 264,                    /* FROM  */
    WHEN = 265,                    /* WHEN  */
    OTHERWISE = 266,               /* OTHERWISE  */
    WHETHER = 267,                 /* WHETHER  */
    RETURN = 268,                  /* RETURN  */
    DEFINE = 269,                  /* DEFINE  */
    UNTIL = 270,                   /* UNTIL  */
    SHIFT = 271,                   /* SHIFT  */
    EVENT = 272,                   /* EVENT  */
    EOL = 273,                     /* EOL  */
    THEN = 274,                    /* THEN  */
    PLUS = 275,                    /* PLUS  */
    MINUS = 276,                   /* MINUS  */
    MUL = 277,                     /* MUL  */
    DIV = 278,                     /* DIV  */
    EQ = 279,                      /* EQ  */
    GT = 280,                      /* GT  */
    GE = 281,                      /* GE  */
    LT = 282,                      /* LT  */
    LE = 283,                      /* LE  */
    POW = 284,                     /* POW  */
    NOTEQUAL = 285,                /* NOTEQUAL  */
    ASSIGN = 286,                  /* ASSIGN  */
    ABS = 287,                     /* ABS  */
    NUMBER = 288,                  /* NUMBER  */
    NUM = 289,                     /* NUM  */
    BINARY = 290,                  /* BINARY  */
    ROMAN = 291,                   /* ROMAN  */
    STR = 292,                     /* STR  */
    ID = 293,                      /* ID  */
    KEYWORD = 294,                 /* KEYWORD  */
    DATA_TYPE = 295,               /* DATA_TYPE  */
    SPECIAL_CHAR = 296,            /* SPECIAL_CHAR  */
    FUNC = 297,                    /* FUNC  */
    CMP = 298,                     /* CMP  */
    UMINUS = 299                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "parser.y"

    double num;
    char *st;
    char op;
    struct ast *a;
    struct symbol *s; // which symbol
    struct symlist *sl; // symbol list
    int fn;          // which function

#line 118 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
