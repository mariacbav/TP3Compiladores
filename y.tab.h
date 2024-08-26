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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    STRING = 260,                  /* STRING  */
    VOID = 261,                    /* VOID  */
    MATRIX = 262,                  /* MATRIX  */
    RETURN = 263,                  /* RETURN  */
    UNSNUMERO = 264,               /* UNSNUMERO  */
    CASE = 265,                    /* CASE  */
    ASSIGN = 266,                  /* ASSIGN  */
    INPUT = 267,                   /* INPUT  */
    OUTPUT = 268,                  /* OUTPUT  */
    IF = 269,                      /* IF  */
    ELIF = 270,                    /* ELIF  */
    ELSE = 271,                    /* ELSE  */
    SWITCH = 272,                  /* SWITCH  */
    FOR = 273,                     /* FOR  */
    WHILE = 274,                   /* WHILE  */
    BREAK = 275,                   /* BREAK  */
    CONTINUE = 276,                /* CONTINUE  */
    EQ = 277,                      /* EQ  */
    INCREMENT = 278,               /* INCREMENT  */
    DECREMENT = 279,               /* DECREMENT  */
    CONCAT = 280,                  /* CONCAT  */
    SUBSTRING = 281,               /* SUBSTRING  */
    CASE_UP = 282,                 /* CASE_UP  */
    CASE_DOWN = 283,               /* CASE_DOWN  */
    STRING_DIV = 284,              /* STRING_DIV  */
    SORT = 285,                    /* SORT  */
    ARRAY = 286,                   /* ARRAY  */
    FLOAT_LITERAL = 287,           /* FLOAT_LITERAL  */
    INT_LITERAL = 288,             /* INT_LITERAL  */
    STRING_LITERAL = 289,          /* STRING_LITERAL  */
    IDENTIFIER = 290,              /* IDENTIFIER  */
    VECTOR_DECLARATION = 291,      /* VECTOR_DECLARATION  */
    PLUS = 292,                    /* PLUS  */
    MINUS = 293,                   /* MINUS  */
    MULTIPLY = 294,                /* MULTIPLY  */
    DIVIDE = 295,                  /* DIVIDE  */
    LPAREN = 296,                  /* LPAREN  */
    RPAREN = 297,                  /* RPAREN  */
    LBRACE = 298,                  /* LBRACE  */
    RBRACE = 299,                  /* RBRACE  */
    LBRACKET = 300,                /* LBRACKET  */
    RBRACKET = 301,                /* RBRACKET  */
    SEMICOLON = 302,               /* SEMICOLON  */
    COMMA = 303,                   /* COMMA  */
    COLON = 304,                   /* COLON  */
    LT = 305,                      /* LT  */
    GT = 306,                      /* GT  */
    LE = 307,                      /* LE  */
    GE = 308,                      /* GE  */
    NE = 309,                      /* NE  */
    MARKS = 310,                   /* MARKS  */
    PERCENT = 311,                 /* PERCENT  */
    ADD = 312,                     /* ADD  */
    DOT = 313,                     /* DOT  */
    LEN = 314,                     /* LEN  */
    AT = 315,                      /* AT  */
    LOWER_THAN_ELSE = 316          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define FLOAT 259
#define STRING 260
#define VOID 261
#define MATRIX 262
#define RETURN 263
#define UNSNUMERO 264
#define CASE 265
#define ASSIGN 266
#define INPUT 267
#define OUTPUT 268
#define IF 269
#define ELIF 270
#define ELSE 271
#define SWITCH 272
#define FOR 273
#define WHILE 274
#define BREAK 275
#define CONTINUE 276
#define EQ 277
#define INCREMENT 278
#define DECREMENT 279
#define CONCAT 280
#define SUBSTRING 281
#define CASE_UP 282
#define CASE_DOWN 283
#define STRING_DIV 284
#define SORT 285
#define ARRAY 286
#define FLOAT_LITERAL 287
#define INT_LITERAL 288
#define STRING_LITERAL 289
#define IDENTIFIER 290
#define VECTOR_DECLARATION 291
#define PLUS 292
#define MINUS 293
#define MULTIPLY 294
#define DIVIDE 295
#define LPAREN 296
#define RPAREN 297
#define LBRACE 298
#define RBRACE 299
#define LBRACKET 300
#define RBRACKET 301
#define SEMICOLON 302
#define COMMA 303
#define COLON 304
#define LT 305
#define GT 306
#define LE 307
#define GE 308
#define NE 309
#define MARKS 310
#define PERCENT 311
#define ADD 312
#define DOT 313
#define LEN 314
#define AT 315
#define LOWER_THAN_ELSE 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "translate.y"

    int ival;
    float fval;
    char *sval;

#line 195 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
