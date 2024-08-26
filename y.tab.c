/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "translate.y"

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

extern int yylineno;
extern FILE *yyin;
int yyparse();
void yyerror(const char *s);
extern int yylex();
extern char *yytext;

//Funções da symTable:
void add(char);
void insert_type();
int search(char *);
void insert_type();
void insert_name();

//Estrutura da symTable:
struct dataType {
    char * id_name;
    char * data_type;
    char * type;
    int line_no;
} symbol_table[40];

int count=0;

//Manipulação da symTable:
int q;
char type[10];
char name[20];
char function_name[20];
char matrix_name[20];
extern int countn;


#line 111 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 292 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_VOID = 6,                       /* VOID  */
  YYSYMBOL_MATRIX = 7,                     /* MATRIX  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_UNSNUMERO = 9,                  /* UNSNUMERO  */
  YYSYMBOL_CASE = 10,                      /* CASE  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_INPUT = 12,                     /* INPUT  */
  YYSYMBOL_OUTPUT = 13,                    /* OUTPUT  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_ELIF = 15,                      /* ELIF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_SWITCH = 17,                    /* SWITCH  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_BREAK = 20,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 21,                  /* CONTINUE  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_INCREMENT = 23,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 24,                 /* DECREMENT  */
  YYSYMBOL_CONCAT = 25,                    /* CONCAT  */
  YYSYMBOL_SUBSTRING = 26,                 /* SUBSTRING  */
  YYSYMBOL_CASE_UP = 27,                   /* CASE_UP  */
  YYSYMBOL_CASE_DOWN = 28,                 /* CASE_DOWN  */
  YYSYMBOL_STRING_DIV = 29,                /* STRING_DIV  */
  YYSYMBOL_SORT = 30,                      /* SORT  */
  YYSYMBOL_ARRAY = 31,                     /* ARRAY  */
  YYSYMBOL_FLOAT_LITERAL = 32,             /* FLOAT_LITERAL  */
  YYSYMBOL_INT_LITERAL = 33,               /* INT_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 34,            /* STRING_LITERAL  */
  YYSYMBOL_IDENTIFIER = 35,                /* IDENTIFIER  */
  YYSYMBOL_VECTOR_DECLARATION = 36,        /* VECTOR_DECLARATION  */
  YYSYMBOL_PLUS = 37,                      /* PLUS  */
  YYSYMBOL_MINUS = 38,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 39,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 40,                    /* DIVIDE  */
  YYSYMBOL_LPAREN = 41,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 42,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 43,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 44,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 45,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 46,                  /* RBRACKET  */
  YYSYMBOL_SEMICOLON = 47,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 48,                     /* COMMA  */
  YYSYMBOL_COLON = 49,                     /* COLON  */
  YYSYMBOL_LT = 50,                        /* LT  */
  YYSYMBOL_GT = 51,                        /* GT  */
  YYSYMBOL_LE = 52,                        /* LE  */
  YYSYMBOL_GE = 53,                        /* GE  */
  YYSYMBOL_NE = 54,                        /* NE  */
  YYSYMBOL_MARKS = 55,                     /* MARKS  */
  YYSYMBOL_PERCENT = 56,                   /* PERCENT  */
  YYSYMBOL_ADD = 57,                       /* ADD  */
  YYSYMBOL_DOT = 58,                       /* DOT  */
  YYSYMBOL_LEN = 59,                       /* LEN  */
  YYSYMBOL_AT = 60,                        /* AT  */
  YYSYMBOL_LOWER_THAN_ELSE = 61,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_declaration_list = 64,          /* declaration_list  */
  YYSYMBOL_declaration = 65,               /* declaration  */
  YYSYMBOL_variable_declaration = 66,      /* variable_declaration  */
  YYSYMBOL_67_1 = 67,                      /* $@1  */
  YYSYMBOL_68_2 = 68,                      /* $@2  */
  YYSYMBOL_function_declaration = 69,      /* function_declaration  */
  YYSYMBOL_70_3 = 70,                      /* $@3  */
  YYSYMBOL_bracket = 71,                   /* bracket  */
  YYSYMBOL_array_declaration = 72,         /* array_declaration  */
  YYSYMBOL_73_4 = 73,                      /* $@4  */
  YYSYMBOL_74_5 = 74,                      /* $@5  */
  YYSYMBOL_75_6 = 75,                      /* $@6  */
  YYSYMBOL_type_specifier = 76,            /* type_specifier  */
  YYSYMBOL_parameter_list = 77,            /* parameter_list  */
  YYSYMBOL_parameter = 78,                 /* parameter  */
  YYSYMBOL_compound_statement = 79,        /* compound_statement  */
  YYSYMBOL_statement_list = 80,            /* statement_list  */
  YYSYMBOL_statement = 81,                 /* statement  */
  YYSYMBOL_put_statement = 82,             /* put_statement  */
  YYSYMBOL_array_str_statement = 83,       /* array_str_statement  */
  YYSYMBOL_str = 84,                       /* str  */
  YYSYMBOL_array_sort = 85,                /* array_sort  */
  YYSYMBOL_concat = 86,                    /* concat  */
  YYSYMBOL_search = 87,                    /* search  */
  YYSYMBOL_case = 88,                      /* case  */
  YYSYMBOL_str_id = 89,                    /* str_id  */
  YYSYMBOL_len = 90,                       /* len  */
  YYSYMBOL_acess = 91,                     /* acess  */
  YYSYMBOL_expression_statement = 92,      /* expression_statement  */
  YYSYMBOL_selection_statement = 93,       /* selection_statement  */
  YYSYMBOL_case_list = 94,                 /* case_list  */
  YYSYMBOL_elif_list = 95,                 /* elif_list  */
  YYSYMBOL_iteration_statement = 96,       /* iteration_statement  */
  YYSYMBOL_return_statement = 97,          /* return_statement  */
  YYSYMBOL_expression = 98,                /* expression  */
  YYSYMBOL_simple_expression = 99,         /* simple_expression  */
  YYSYMBOL_relational_operator = 100,      /* relational_operator  */
  YYSYMBOL_additive_expression = 101,      /* additive_expression  */
  YYSYMBOL_term = 102,                     /* term  */
  YYSYMBOL_increment = 103,                /* increment  */
  YYSYMBOL_factor = 104,                   /* factor  */
  YYSYMBOL_literal = 105,                  /* literal  */
  YYSYMBOL_out = 106,                      /* out  */
  YYSYMBOL_in = 107,                       /* in  */
  YYSYMBOL_percent_list = 108,             /* percent_list  */
  YYSYMBOL_address_list = 109              /* address_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   220

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    66,    66,    70,    71,    75,    79,    79,    80,    80,
      84,    84,    88,    92,    92,    93,    93,    93,    97,    98,
      99,   100,   104,   105,   106,   110,   114,   118,   119,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   136,   137,
     141,   142,   143,   144,   145,   146,   150,   151,   152,   153,
     157,   161,   166,   170,   171,   175,   179,   183,   184,   188,
     192,   193,   194,   198,   199,   203,   204,   209,   210,   214,
     218,   219,   223,   224,   228,   229,   230,   231,   232,   233,
     237,   238,   239,   243,   244,   245,   250,   251,   252,   256,
     257,   258,   262,   263,   264,   268,   269,   273,   277,   278,
     281,   282
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT",
  "STRING", "VOID", "MATRIX", "RETURN", "UNSNUMERO", "CASE", "ASSIGN",
  "INPUT", "OUTPUT", "IF", "ELIF", "ELSE", "SWITCH", "FOR", "WHILE",
  "BREAK", "CONTINUE", "EQ", "INCREMENT", "DECREMENT", "CONCAT",
  "SUBSTRING", "CASE_UP", "CASE_DOWN", "STRING_DIV", "SORT", "ARRAY",
  "FLOAT_LITERAL", "INT_LITERAL", "STRING_LITERAL", "IDENTIFIER",
  "VECTOR_DECLARATION", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "SEMICOLON",
  "COMMA", "COLON", "LT", "GT", "LE", "GE", "NE", "MARKS", "PERCENT",
  "ADD", "DOT", "LEN", "AT", "LOWER_THAN_ELSE", "$accept", "program",
  "declaration_list", "declaration", "variable_declaration", "$@1", "$@2",
  "function_declaration", "$@3", "bracket", "array_declaration", "$@4",
  "$@5", "$@6", "type_specifier", "parameter_list", "parameter",
  "compound_statement", "statement_list", "statement", "put_statement",
  "array_str_statement", "str", "array_sort", "concat", "search", "case",
  "str_id", "len", "acess", "expression_statement", "selection_statement",
  "case_list", "elif_list", "iteration_statement", "return_statement",
  "expression", "simple_expression", "relational_operator",
  "additive_expression", "term", "increment", "factor", "literal", "out",
  "in", "percent_list", "address_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-134)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-67)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     143,  -134,  -134,  -134,  -134,    29,   143,  -134,  -134,    12,
    -134,  -134,  -134,    14,   143,    18,   -17,  -134,  -134,    -8,
     143,  -134,  -134,  -134,    62,   -13,    23,    30,    36,    41,
      49,    52,    57,    61,    63,  -134,  -134,  -134,    -6,   -13,
    -134,  -134,  -134,     2,  -134,  -134,  -134,    67,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,    68,  -134,
     133,    10,  -134,  -134,  -134,  -134,  -134,     3,    69,    65,
      25,   -13,    83,   -13,   -13,    87,    28,    90,  -134,    51,
    -134,  -134,    93,   -15,    82,    92,    -4,  -134,  -134,  -134,
    -134,    78,    78,  -134,  -134,  -134,  -134,  -134,    78,    28,
      28,   -13,  -134,   143,    84,   -12,    94,    98,   -13,    99,
     104,  -134,   105,   114,     0,  -134,    89,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,   116,   153,   107,    82,    34,    10,
      10,    35,  -134,  -134,    65,   109,   126,   109,    -8,   129,
     -13,    -8,   139,   140,   141,   144,  -134,  -134,   -13,   172,
     134,  -134,   145,   147,  -134,   148,    85,   181,   150,  -134,
     151,   152,   154,   146,   135,  -134,  -134,   109,   155,   156,
     157,   183,   159,   160,    -8,  -134,  -134,  -134,   164,  -134,
      82,  -134,  -134,  -134,   -13,    -8,     8,  -134,  -134,   161,
      82,   163,  -134,   166,  -134,   162,    -8,   165,  -134,   186,
    -134,  -134,   125,   168,   181,  -134
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    18,    19,    20,    21,     0,     2,     4,     5,     0,
       1,     3,    10,     0,    24,     0,     0,    23,    25,     0,
       0,    28,    11,    22,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    93,    92,    94,    90,     0,
      26,    36,    37,     0,    30,    27,    33,     0,    45,    44,
      43,    42,    40,    41,    29,    31,    32,    35,     0,    71,
      73,    82,    85,    88,    91,    38,    39,    90,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
      86,    87,     0,     0,    57,     0,     6,    13,    34,    59,
      78,     0,     0,    74,    75,    76,    77,    79,     0,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,    90,    70,     0,    54,    53,    50,
      56,    48,    58,    89,     0,     0,     0,     0,    90,    80,
      81,    72,    83,    84,    99,   101,     0,   101,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     7,     0,     0,
       0,    98,     0,     0,    95,     0,    60,    64,     0,    67,
       0,     0,     0,     0,     0,    16,    14,   101,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    55,     0,     9,
       0,   100,    97,    96,     0,     0,     0,    62,    68,     0,
       0,     0,    61,     0,    47,     0,     0,     0,    17,    66,
      28,    65,    46,     0,    64,    63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,  -134,   200,  -134,  -134,  -134,  -134,  -134,   -81,
    -134,  -134,  -134,  -134,   -14,  -134,   190,   -18,    11,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
     -65,  -134,     9,    13,  -134,  -134,   -23,  -134,  -134,   118,
      16,  -134,   -67,    31,  -134,  -134,    86,  -133
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,    41,   124,   125,     8,    13,    84,
      42,   127,   126,   180,     9,    16,    17,    44,    24,    45,
      46,    47,    48,    49,    50,    51,   121,    78,    52,    53,
      54,    55,   173,   171,    56,    57,    58,    59,    98,    60,
      61,    62,    63,    64,    65,    66,   104,   153
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    22,    68,   122,   155,    79,    15,    -8,   108,   112,
      43,   101,   117,   118,   101,   119,    85,    80,    81,    35,
      36,    37,    67,    80,    81,    19,    80,    81,    39,    10,
     136,    20,   132,   133,   181,    21,   137,    86,    87,    82,
      35,    36,    37,   140,   120,   145,   150,    12,   106,    99,
     100,   109,    83,    18,   -15,    14,   115,    80,    81,   105,
      35,    36,    37,   111,    69,     1,     2,     3,     4,    39,
      25,    70,    91,    92,    26,    27,    28,    71,   115,    29,
      30,    31,    72,    35,    36,    37,   114,    32,    33,   134,
      73,    34,    39,    74,    35,    36,    37,    38,    75,   190,
     170,   -66,    76,    39,    77,    21,    40,   129,   130,   195,
      35,    36,    37,   128,    88,    89,   102,   158,   107,    39,
     156,   103,   110,   159,   113,   164,   116,    82,     1,     2,
       3,     4,   135,    25,   123,   146,   138,    26,    27,    28,
     139,   141,    29,    30,    31,   203,     1,     2,     3,     4,
      32,    33,   142,   143,    34,    90,   188,    35,    36,    37,
      38,   191,   144,   147,   148,   149,    39,   192,    21,   152,
      91,    92,   157,   154,   160,   161,   162,   163,   199,   165,
     167,   166,   179,    93,    94,    95,    96,    97,    43,   168,
     169,   172,   174,   175,   176,   178,   177,   189,   184,   185,
     186,   170,   182,   183,   187,   196,    11,   194,   197,   198,
      23,   202,   201,   205,   200,   204,   131,   193,     0,     0,
     151
};

static const yytype_int16 yycheck[] =
{
      14,    19,    25,    84,   137,    11,    20,    11,    73,    76,
      24,    11,    27,    28,    11,    30,    39,    23,    24,    32,
      33,    34,    35,    23,    24,    42,    23,    24,    41,     0,
      42,    48,    99,   100,   167,    43,    48,    35,    36,    45,
      32,    33,    34,   108,    59,    45,   127,    35,    71,    39,
      40,    74,    58,    35,    58,    41,    79,    23,    24,    34,
      32,    33,    34,    35,    41,     3,     4,     5,     6,    41,
       8,    41,    37,    38,    12,    13,    14,    41,   101,    17,
      18,    19,    41,    32,    33,    34,    35,    25,    26,   103,
      41,    29,    41,    41,    32,    33,    34,    35,    41,   180,
      15,    16,    41,    41,    41,    43,    44,    91,    92,   190,
      32,    33,    34,    35,    47,    47,    47,   140,    35,    41,
     138,    56,    35,   141,    34,   148,    33,    45,     3,     4,
       5,     6,    48,     8,    42,    46,    42,    12,    13,    14,
      42,    42,    17,    18,    19,    20,     3,     4,     5,     6,
      25,    26,    48,    48,    29,    22,   174,    32,    33,    34,
      35,   184,    48,    47,    11,    58,    41,   185,    43,    60,
      37,    38,    43,    47,    35,    35,    35,    33,   196,     7,
      35,    47,    47,    50,    51,    52,    53,    54,   202,    42,
      42,    10,    42,    42,    42,    49,    42,    33,    41,    16,
      41,    15,    47,    47,    44,    42,     6,    46,    42,    47,
      20,   200,   199,   204,    49,    47,    98,   186,    -1,    -1,
     134
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    63,    64,    65,    69,    76,
       0,    65,    35,    70,    41,    76,    77,    78,    35,    42,
      48,    43,    79,    78,    80,     8,    12,    13,    14,    17,
      18,    19,    25,    26,    29,    32,    33,    34,    35,    41,
      44,    66,    72,    76,    79,    81,    82,    83,    84,    85,
      86,    87,    90,    91,    92,    93,    96,    97,    98,    99,
     101,   102,   103,   104,   105,   106,   107,    35,    98,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    89,    11,
      23,    24,    45,    58,    71,    98,    35,    36,    47,    47,
      22,    37,    38,    50,    51,    52,    53,    54,   100,    39,
      40,    11,    47,    56,   108,    34,    98,    35,    92,    98,
      35,    35,   104,    34,    35,    98,    33,    27,    28,    30,
      59,    88,    71,    42,    67,    68,    74,    73,    35,   102,
     102,   101,   104,   104,    76,    48,    42,    48,    42,    42,
      92,    42,    48,    48,    48,    45,    46,    47,    11,    58,
      71,   108,    60,   109,    47,   109,    79,    43,    98,    79,
      35,    35,    35,    33,    98,     7,    47,    35,    42,    42,
      15,    95,    10,    94,    42,    42,    42,    42,    49,    47,
      75,   109,    47,    47,    41,    16,    41,    44,    79,    33,
      71,    98,    79,   105,    46,    71,    42,    42,    47,    79,
      49,    95,    80,    20,    47,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    67,    66,    68,    66,
      70,    69,    71,    73,    72,    74,    75,    72,    76,    76,
      76,    76,    77,    77,    77,    78,    79,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      85,    86,    87,    88,    88,    89,    90,    91,    91,    92,
      93,    93,    93,    94,    94,    95,    95,    96,    96,    97,
      98,    98,    99,    99,   100,   100,   100,   100,   100,   100,
     101,   101,   101,   102,   102,   102,   103,   103,   103,   104,
     104,   104,   105,   105,   105,   106,   106,   107,   108,   108,
     109,   109
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     0,     4,     0,     6,
       0,     7,     3,     0,     5,     0,     0,     9,     1,     1,
       1,     1,     3,     1,     0,     2,     3,     2,     0,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     8,     3,     2,
       3,     6,     6,     1,     1,     5,     3,     2,     3,     2,
       5,     8,     7,     9,     0,     6,     0,     5,     7,     3,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     2,     2,     1,     3,
       1,     1,     1,     1,     1,     5,     7,     7,     3,     0,
       3,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 6: /* $@1: %empty  */
#line 79 "translate.y"
                               {strcpy(name,(yyvsp[0].sval)); add('V');}
#line 1532 "y.tab.c"
    break;

  case 8: /* $@2: %empty  */
#line 80 "translate.y"
                               {strcpy(name,(yyvsp[0].sval)); add('V');}
#line 1538 "y.tab.c"
    break;

  case 10: /* $@3: %empty  */
#line 84 "translate.y"
                              {strcpy(function_name , (yyvsp[0].sval)); add('F');}
#line 1544 "y.tab.c"
    break;

  case 13: /* $@4: %empty  */
#line 92 "translate.y"
                                      {add('A');}
#line 1550 "y.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 93 "translate.y"
                               {strcpy(matrix_name, (yyvsp[0].sval));}
#line 1556 "y.tab.c"
    break;

  case 16: /* $@6: %empty  */
#line 93 "translate.y"
                                                                     {add('M');}
#line 1562 "y.tab.c"
    break;

  case 18: /* type_specifier: INT  */
#line 97 "translate.y"
        { insert_type(); }
#line 1568 "y.tab.c"
    break;

  case 19: /* type_specifier: FLOAT  */
#line 98 "translate.y"
            { insert_type(); }
#line 1574 "y.tab.c"
    break;

  case 20: /* type_specifier: STRING  */
#line 99 "translate.y"
             { insert_type(); }
#line 1580 "y.tab.c"
    break;

  case 21: /* type_specifier: VOID  */
#line 100 "translate.y"
           { insert_type(); }
#line 1586 "y.tab.c"
    break;


#line 1590 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 284 "translate.y"


int main(int argc, char **argv) {

    // Verificação dos argumentos da linha de comando:
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <arquivo de entrada>\n", argv[0]);
        return 1;
    }

    // Abertura do arquivo especificado pelo usuário:
    yyin = fopen(argv[1], "r");
    if (!yyin) {
        fprintf(stderr, "Erro ao abrir o arquivo %s\n", argv[1]);
        return 1;
    }

    // Variáveis para leitura e contagem de linhas:
    char line[1024]; 
    int line_number = 1;

    // Impressão do programa fonte com números de linha:
    printf("Programa fonte:\n");
    while (fgets(line, sizeof(line), yyin)) {
        printf("%3d: %s", line_number++, line);
    }
    printf("\n");

    // Volta ao início do arquivo
    rewind(yyin);

    // Chamada ao analisador sintático gerado pelo Bison
    int result = yyparse();


    // Fechamento do arquivo de entrada:
    if (fclose(yyin) != 0) {
        fprintf(stderr, "Erro ao fechar o arquivo %s\n", argv[1]);
        return 1;
    }

    // Mensagem de saída dependendo do resultado do parsing
    if (result == 0) {
        printf("Programa sintaticamente correto\n");
        printf("\n\n");
	    printf("\nSYMBOL   DATATYPE   TYPE   LINE NUMBER \n");
	    printf("_______________________________________\n\n");
	    int i=0;
	    for(i=0; i<count; i++) {
		    printf("%s\t%s\t%s\t%d\t\n", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type, symbol_table[i].line_no);
	}
	for(i=0;i<count;i++) {
		free(symbol_table[i].id_name);
		free(symbol_table[i].type);
	}

    printf("\n\n");
    } else {
        printf("Programa sintaticamente incorreto\n");
        printf("\n\n");
    }

    // Retorno do resultado do parsing
    return result;
}
void insert_type() {
    strcpy(type, yytext);
}
void insert_name(){
    strcpy(name,yytext);
}

void add(char c) {
  q=search(yytext);
  if(!q) {
    if(c == 'A') {
         symbol_table[count].id_name=strdup(yytext);        
         symbol_table[count].data_type=strdup(type);     
         symbol_table[count].line_no=countn;    
         symbol_table[count].type=strdup("Array        ");
         count++;  
    }else if(c == 'M') {
         symbol_table[count].id_name=strdup(matrix_name);
         symbol_table[count].data_type=strdup(yytext);
         symbol_table[count].line_no=countn;
         symbol_table[count].type=strdup("Matrix       ");   
         count++;  
    }else if(c == 'V') {
         symbol_table[count].id_name=strdup(name);
         symbol_table[count].data_type=strdup(type);
         symbol_table[count].line_no=countn;
         symbol_table[count].type=strdup("Variable");   
         count++;  
    }else if(c == 'F') {
         symbol_table[count].id_name=strdup(function_name);
         symbol_table[count].data_type=strdup(type);
         symbol_table[count].line_no=countn;
         symbol_table[count].type=strdup("Function");   
         count++;  
    }
  }
}
int search(char *type) { 
    int i; 
    for(i=count-1; i>=0; i--) {
        if(strcmp(symbol_table[i].id_name, type)==0) {   
            return -1;
            break;  
        }
    } 
    return 0;
}
// Declaração externa para a variável yyin usada pelo Flex/Bison
extern FILE *yyin;

// Variável externa para número de linha, geralmente fornecida pelo analisador
extern int yylineno;

// Função de erro do Bison para reportar erros de parsing
void yyerror(const char *s) {
    fprintf(stderr, "Erro proximo a linha %d: %s\n", yylineno, s);
}
