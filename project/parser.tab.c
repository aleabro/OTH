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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "helper.h"

int yydebug = 1;
extern FILE *yyin;
extern int yylineno;

void print_val(val_t val);

int yylex();

#line 87 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_STEP = 3,                       /* STEP  */
  YYSYMBOL_TO = 4,                         /* TO  */
  YYSYMBOL_FROM = 5,                       /* FROM  */
  YYSYMBOL_WHEN = 6,                       /* WHEN  */
  YYSYMBOL_OTHERWISE = 7,                  /* OTHERWISE  */
  YYSYMBOL_WHETHER = 8,                    /* WHETHER  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_DEFINE = 10,                    /* DEFINE  */
  YYSYMBOL_UNTIL = 11,                     /* UNTIL  */
  YYSYMBOL_THEN = 12,                      /* THEN  */
  YYSYMBOL_AND = 13,                       /* AND  */
  YYSYMBOL_OR = 14,                        /* OR  */
  YYSYMBOL_NOT = 15,                       /* NOT  */
  YYSYMBOL_PLUS = 16,                      /* PLUS  */
  YYSYMBOL_MINUS = 17,                     /* MINUS  */
  YYSYMBOL_MUL = 18,                       /* MUL  */
  YYSYMBOL_DIV = 19,                       /* DIV  */
  YYSYMBOL_POW = 20,                       /* POW  */
  YYSYMBOL_ASSIGN = 21,                    /* ASSIGN  */
  YYSYMBOL_ABS = 22,                       /* ABS  */
  YYSYMBOL_MOD = 23,                       /* MOD  */
  YYSYMBOL_NUM = 24,                       /* NUM  */
  YYSYMBOL_BINARY = 25,                    /* BINARY  */
  YYSYMBOL_ROMAN = 26,                     /* ROMAN  */
  YYSYMBOL_STR = 27,                       /* STR  */
  YYSYMBOL_FUNC = 28,                      /* FUNC  */
  YYSYMBOL_DATA_TYPE = 29,                 /* DATA_TYPE  */
  YYSYMBOL_ID = 30,                        /* ID  */
  YYSYMBOL_CMP = 31,                       /* CMP  */
  YYSYMBOL_UMINUS = 32,                    /* UMINUS  */
  YYSYMBOL_33_ = 33,                       /* ';'  */
  YYSYMBOL_34_ = 34,                       /* '['  */
  YYSYMBOL_35_ = 35,                       /* ']'  */
  YYSYMBOL_36_ = 36,                       /* ':'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* '('  */
  YYSYMBOL_40_ = 40,                       /* ')'  */
  YYSYMBOL_41_ = 41,                       /* ','  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_S = 43,                         /* S  */
  YYSYMBOL_START = 44,                     /* START  */
  YYSYMBOL_stmts = 45,                     /* stmts  */
  YYSYMBOL_stmt = 46,                      /* stmt  */
  YYSYMBOL_flow = 47,                      /* flow  */
  YYSYMBOL_declare = 48,                   /* declare  */
  YYSYMBOL_init = 49,                      /* init  */
  YYSYMBOL_assignment = 50,                /* assignment  */
  YYSYMBOL_whether = 51,                   /* whether  */
  YYSYMBOL_when = 52,                      /* when  */
  YYSYMBOL_from = 53,                      /* from  */
  YYSYMBOL_condition = 54,                 /* condition  */
  YYSYMBOL_expr = 55,                      /* expr  */
  YYSYMBOL_value = 56,                     /* value  */
  YYSYMBOL_list = 57,                      /* list  */
  YYSYMBOL_explist = 58,                   /* explist  */
  YYSYMBOL_symlist = 59,                   /* symlist  */
  YYSYMBOL_return = 60,                    /* return  */
  YYSYMBOL_ufunction = 61,                 /* ufunction  */
  YYSYMBOL_funcall = 62                    /* funcall  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  139

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


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
      39,    40,     2,     2,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,    33,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    51,    52,    53,    54,    55,    58,    63,
      64,    70,    73,    74,    75,    76,    77,    80,    81,    82,
      84,    91,    92,    94,    96,    97,   100,   101,   105,   113,
     114,   115,   116,   117,   118,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   132,   133,   134,   135,
     136,   137,   138,   140,   141,   144,   145,   147,   148,   150,
     152,   153,   155,   156
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "STEP", "TO", "FROM",
  "WHEN", "OTHERWISE", "WHETHER", "RETURN", "DEFINE", "UNTIL", "THEN",
  "AND", "OR", "NOT", "PLUS", "MINUS", "MUL", "DIV", "POW", "ASSIGN",
  "ABS", "MOD", "NUM", "BINARY", "ROMAN", "STR", "FUNC", "DATA_TYPE", "ID",
  "CMP", "UMINUS", "';'", "'['", "']'", "':'", "'{'", "'}'", "'('", "')'",
  "','", "$accept", "S", "START", "stmts", "stmt", "flow", "declare",
  "init", "assignment", "whether", "when", "from", "condition", "expr",
  "value", "list", "explist", "symlist", "return", "ufunction", "funcall", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-43)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-15)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -43,     5,    39,   -43,   -43,   -21,   -25,   -20,   229,     8,
     229,   229,   -43,   -43,   -43,   -43,    -9,    13,   -17,   213,
     229,   -43,    27,   176,   -43,   -43,   -43,   -43,   -43,   271,
     -43,   -43,   -43,   -43,    41,    47,    66,   176,    66,    38,
     271,   -43,    43,   -43,   263,   229,    59,   229,   229,   -43,
       0,    50,   119,   176,   -43,   229,   229,   229,   229,   229,
     229,    82,    66,    66,    -3,   253,    49,    11,    12,   -43,
      55,   229,   -43,   271,    58,   229,   -43,   -43,   -43,    52,
      52,   -43,   -43,    52,   -43,   229,    23,    -6,   205,    66,
      66,    62,   229,    91,    94,    69,    70,    63,   -43,   271,
     -43,   -43,   128,   -43,    23,    23,   176,   271,    77,    76,
      88,   176,    83,   229,    81,    66,    85,   -43,    89,   176,
     154,   -43,    15,   176,   -43,    92,    86,   -43,    95,   -43,
     176,   122,   102,    90,   -43,   112,   176,   116,   -43
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     6,     0,     0,     0,    46,     0,
      46,    46,    47,    48,    49,    51,     0,     0,    50,    46,
      46,     4,     0,    11,    12,    13,    17,    18,    19,    16,
      44,    52,    15,     5,    45,     0,    46,    46,    46,    50,
      59,    45,     0,    42,     0,    46,    22,    46,    46,    53,
      55,     0,     0,     9,    10,    46,    46,    46,    46,    46,
      46,     0,    46,    46,     0,    34,     0,     0,     0,    41,
       0,    46,    20,    23,     0,    46,    54,    43,     8,    35,
      36,    37,    38,    39,    40,    46,    32,     0,    34,    46,
      46,     0,    46,     0,     0,    57,     0,     0,    63,    21,
      62,    56,     0,    33,    30,    31,    46,    29,     0,     0,
       0,    46,     0,    46,     0,    46,     0,    58,     0,    46,
       0,    26,     0,    46,    61,     0,     0,    27,     0,    60,
      46,    24,     0,     0,    28,     0,    46,     0,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -43,   -43,   -43,   -22,   -43,   -43,    97,   -43,   -43,   -43,
     -43,   -43,   -36,   105,   -43,   -43,   -42,    45,   -43,   -43,
      -2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    21,    22,    23,    24,    72,    25,    26,
      27,    28,    64,    29,    30,    31,    51,    97,    32,    33,
      41
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    54,    67,    70,    47,     3,    74,    89,    90,    36,
      89,    90,    37,    35,    38,    66,    55,    56,    57,    58,
      59,    34,    48,    60,    89,    90,    86,    87,    89,    90,
      45,    78,    91,   101,   103,    34,    89,    90,    42,    -2,
       4,    75,    95,    46,     5,     6,    94,     7,     8,     9,
     127,    34,    96,   104,   105,    -7,    10,    -7,    -7,    -7,
      53,    11,    -7,    12,    13,    14,    15,    16,    17,    18,
      57,    58,    -7,    19,   -14,    60,    17,    48,    20,   122,
      71,    62,    68,    10,   114,    76,    85,    93,    11,   118,
      12,    13,    14,    15,    16,    98,    39,   125,   100,   106,
      19,   128,   108,   112,    34,    63,   109,   111,   132,    34,
     110,   115,   116,    40,   137,    43,    44,    34,    95,   121,
     119,    34,   123,   130,    50,    52,   135,   124,    34,   133,
     129,   113,    61,   131,    34,    55,    56,    57,    58,    59,
     134,    65,    60,    65,    55,    56,    57,    58,    59,   136,
      50,    60,    73,    50,   138,   117,     0,     0,     0,    77,
      79,    80,    81,    82,    83,    84,     0,    65,    88,     0,
      55,    56,    57,    58,    59,     0,    99,    60,     0,     0,
      50,     5,     6,     0,     7,     8,     0,     0,     0,   126,
     102,     0,     0,    10,    65,    65,     0,   107,    11,     0,
      12,    13,    14,    15,    16,    17,    18,     0,     0,     0,
      19,     0,     0,     0,     0,    20,     0,     0,   120,     0,
      65,    55,    56,    57,    58,    59,     0,     0,    60,     0,
      10,     0,     0,     0,     0,    11,    92,    12,    13,    14,
      15,    16,     0,    39,     0,    77,    10,    19,    49,     0,
       0,    11,    20,    12,    13,    14,    15,    16,     0,    39,
       0,     0,     0,    19,     0,     0,     0,     0,    20,    55,
      56,    57,    58,    59,     0,     0,    60,     0,     0,    55,
      56,    57,    58,    59,    92,    69,    60,    55,    56,    57,
      58,    59,     0,     0,    60
};

static const yytype_int16 yycheck[] =
{
       2,    23,    38,    45,    21,     0,    48,    13,    14,    34,
      13,    14,    37,    34,    34,    37,    16,    17,    18,    19,
      20,    23,    39,    23,    13,    14,    62,    63,    13,    14,
      39,    53,    35,    75,    40,    37,    13,    14,    30,     0,
       1,    41,    30,    30,     5,     6,    35,     8,     9,    10,
      35,    53,    40,    89,    90,    16,    17,    18,    19,    20,
      33,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      18,    19,    33,    34,    33,    23,    29,    39,    39,   115,
      21,    15,    39,    17,   106,    35,     4,    38,    22,   111,
      24,    25,    26,    27,    28,    40,    30,   119,    40,    37,
      34,   123,    11,    40,   106,    39,    12,    37,   130,   111,
      41,    34,    36,     8,   136,    10,    11,   119,    30,    38,
      37,   123,    37,    37,    19,    20,    36,    38,   130,     7,
      38,     3,    35,    38,   136,    16,    17,    18,    19,    20,
      38,    36,    23,    38,    16,    17,    18,    19,    20,    37,
      45,    23,    47,    48,    38,   110,    -1,    -1,    -1,    40,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      16,    17,    18,    19,    20,    -1,    71,    23,    -1,    -1,
      75,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    35,
      85,    -1,    -1,    17,    89,    90,    -1,    92,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    -1,    -1,   113,    -1,
     115,    16,    17,    18,    19,    20,    -1,    -1,    23,    -1,
      17,    -1,    -1,    -1,    -1,    22,    31,    24,    25,    26,
      27,    28,    -1,    30,    -1,    40,    17,    34,    35,    -1,
      -1,    22,    39,    24,    25,    26,    27,    28,    -1,    30,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    16,
      17,    18,    19,    20,    -1,    -1,    23,    -1,    -1,    16,
      17,    18,    19,    20,    31,    22,    23,    16,    17,    18,
      19,    20,    -1,    -1,    23
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    43,    44,     0,     1,     5,     6,     8,     9,    10,
      17,    22,    24,    25,    26,    27,    28,    29,    30,    34,
      39,    45,    46,    47,    48,    50,    51,    52,    53,    55,
      56,    57,    60,    61,    62,    34,    34,    37,    34,    30,
      55,    62,    30,    55,    55,    39,    30,    21,    39,    35,
      55,    58,    55,    33,    45,    16,    17,    18,    19,    20,
      23,    48,    15,    39,    54,    55,    45,    54,    39,    22,
      58,    21,    49,    55,    58,    41,    35,    40,    45,    55,
      55,    55,    55,    55,    55,     4,    54,    54,    55,    13,
      14,    35,    31,    38,    35,    30,    40,    59,    40,    55,
      40,    58,    55,    40,    54,    54,    37,    55,    11,    12,
      41,    37,    40,     3,    45,    34,    36,    59,    45,    37,
      55,    38,    54,    37,    38,    45,    35,    35,    45,    38,
      37,    38,    45,     7,    38,    36,    37,    45,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    44,    44,    44,    45,    45,
      45,    45,    46,    46,    46,    46,    46,    47,    47,    47,
      48,    49,    49,    50,    51,    51,    52,    52,    53,    54,
      54,    54,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      61,    61,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     2,     1,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     0,     3,     9,    14,     7,     8,    11,     3,
       3,     3,     2,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     3,     1,     3,     2,
       8,     7,     4,     4
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* S: START  */
#line 49 "parser.y"
         { print_ast((yyvsp[0].a), 0, " ");  }
#line 1520 "parser.tab.c"
    break;

  case 3: /* START: %empty  */
#line 51 "parser.y"
                        { (yyval.a) = NULL; }
#line 1526 "parser.tab.c"
    break;

  case 4: /* START: START stmts  */
#line 52 "parser.y"
                        {(yyval.a) = newast('L', (yyvsp[-1].a), (yyvsp[0].a)); optimize_ast((yyvsp[0].a)); eval((yyvsp[0].a));  }
#line 1532 "parser.tab.c"
    break;

  case 5: /* START: START ufunction  */
#line 53 "parser.y"
                        { (yyval.a) = newast('L', (yyvsp[-1].a), (yyvsp[0].a)); optimize_ast((yyvsp[0].a)); eval((yyvsp[0].a)); }
#line 1538 "parser.tab.c"
    break;

  case 6: /* START: START error  */
#line 54 "parser.y"
                        { yyerrok; printf("> "); }
#line 1544 "parser.tab.c"
    break;

  case 7: /* START: START  */
#line 55 "parser.y"
                        { printf("> "); (yyval.a) = (yyvsp[0].a); }
#line 1550 "parser.tab.c"
    break;

  case 8: /* stmts: stmt ';' stmts  */
#line 58 "parser.y"
                    { if ((yyvsp[0].a) == NULL) 
        (yyval.a) = (yyvsp[-2].a);
    else 
        (yyval.a) = newast('L', (yyvsp[-2].a), (yyvsp[0].a)); 
        }
#line 1560 "parser.tab.c"
    break;

  case 9: /* stmts: stmt ';'  */
#line 63 "parser.y"
               { (yyval.a) = (yyvsp[-1].a); }
#line 1566 "parser.tab.c"
    break;

  case 10: /* stmts: flow stmts  */
#line 64 "parser.y"
                 {  
        if ((yyvsp[0].a) == NULL) 
            (yyval.a) = (yyvsp[-1].a);
        else 
            (yyval.a) = newast('L', (yyvsp[-1].a), (yyvsp[0].a));
    }
#line 1577 "parser.tab.c"
    break;

  case 11: /* stmts: flow  */
#line 70 "parser.y"
            { (yyval.a) = (yyvsp[0].a); }
#line 1583 "parser.tab.c"
    break;

  case 12: /* stmt: declare  */
#line 73 "parser.y"
                    { (yyval.a) = (yyvsp[0].a); }
#line 1589 "parser.tab.c"
    break;

  case 13: /* stmt: assignment  */
#line 74 "parser.y"
                    { (yyval.a) = (yyvsp[0].a); }
#line 1595 "parser.tab.c"
    break;

  case 14: /* stmt: funcall  */
#line 75 "parser.y"
                    { (yyval.a) = (yyvsp[0].a); }
#line 1601 "parser.tab.c"
    break;

  case 15: /* stmt: return  */
#line 76 "parser.y"
                    { (yyval.a) = (yyvsp[0].a); }
#line 1607 "parser.tab.c"
    break;

  case 16: /* stmt: expr  */
#line 77 "parser.y"
                    { (yyval.a) = (yyvsp[0].a); }
#line 1613 "parser.tab.c"
    break;

  case 20: /* declare: DATA_TYPE ID init  */
#line 84 "parser.y"
                           {
        struct ast *declare = newdeclare((yyvsp[-1].s));
        (yyvsp[-1].s)->type = (yyvsp[-2].dt);
        struct ast *assign = newasgn((yyvsp[-1].s), (yyvsp[0].a));
        (yyval.a) = newast('L', declare, assign);
    }
#line 1624 "parser.tab.c"
    break;

  case 21: /* init: ASSIGN expr  */
#line 91 "parser.y"
                  { (yyval.a) = (yyvsp[0].a); }
#line 1630 "parser.tab.c"
    break;

  case 22: /* init: %empty  */
#line 92 "parser.y"
      { (yyval.a) = NULL; }
#line 1636 "parser.tab.c"
    break;

  case 23: /* assignment: ID ASSIGN expr  */
#line 94 "parser.y"
                           { (yyval.a) = newasgn((yyvsp[-2].s), (yyvsp[0].a)); }
#line 1642 "parser.tab.c"
    break;

  case 24: /* whether: WHETHER '[' condition ']' THEN ':' '{' stmts '}'  */
#line 96 "parser.y"
                                                                                  { (yyval.a) = newflow('I', (yyvsp[-6].a), (yyvsp[-1].a), NULL); }
#line 1648 "parser.tab.c"
    break;

  case 25: /* whether: WHETHER '[' condition ']' THEN ':' '{' stmts '}' OTHERWISE ':' '{' stmts '}'  */
#line 97 "parser.y"
                                                                                  { (yyval.a) = newflow('I', (yyvsp[-11].a), (yyvsp[-6].a), (yyvsp[-1].a)); }
#line 1654 "parser.tab.c"
    break;

  case 26: /* when: WHEN '[' condition ']' '{' stmts '}'  */
#line 100 "parser.y"
                                                    { (yyval.a) = newflow('W', (yyvsp[-4].a), (yyvsp[-1].a), NULL); }
#line 1660 "parser.tab.c"
    break;

  case 27: /* when: WHEN '{' stmts '}' UNTIL '[' condition ']'  */
#line 101 "parser.y"
                                                    { (yyval.a) = newflow('W', (yyvsp[-1].a), (yyvsp[-5].a), (yyvsp[-1].a)); }
#line 1666 "parser.tab.c"
    break;

  case 28: /* from: FROM '[' declare TO expr STEP expr ']' '{' stmts '}'  */
#line 106 "parser.y"
     {
         struct ast *add = newast('+', newref((yyvsp[-8].a)->l->data.sym), (yyvsp[-4].a));
         struct ast *ass = newasgn((yyvsp[-8].a)->l->data.sym, add);
         struct ast *cmp = newast('6', newref((yyvsp[-8].a)->l->data.sym), (yyvsp[-6].a));
         (yyval.a) = newfor((yyvsp[-8].a), cmp, ass, (yyvsp[-1].a));
     }
#line 1677 "parser.tab.c"
    break;

  case 29: /* condition: expr CMP expr  */
#line 113 "parser.y"
                                { (yyval.a) = newcmp((yyvsp[-1].fn), (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1683 "parser.tab.c"
    break;

  case 30: /* condition: condition AND condition  */
#line 114 "parser.y"
                                { (yyval.a) = newast('&', (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1689 "parser.tab.c"
    break;

  case 31: /* condition: condition OR condition  */
#line 115 "parser.y"
                                { (yyval.a) = newast('O', (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1695 "parser.tab.c"
    break;

  case 32: /* condition: NOT condition  */
#line 116 "parser.y"
                                { (yyval.a) = newast('!', (yyvsp[0].a), NULL); }
#line 1701 "parser.tab.c"
    break;

  case 33: /* condition: '(' condition ')'  */
#line 117 "parser.y"
                                { (yyval.a) = (yyvsp[-1].a); }
#line 1707 "parser.tab.c"
    break;

  case 34: /* condition: expr  */
#line 118 "parser.y"
                                { (yyval.a) = (yyvsp[0].a); }
#line 1713 "parser.tab.c"
    break;

  case 35: /* expr: expr PLUS expr  */
#line 120 "parser.y"
                                { (yyval.a) = newast('+', (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1719 "parser.tab.c"
    break;

  case 36: /* expr: expr MINUS expr  */
#line 121 "parser.y"
                                { (yyval.a) = newast('-', (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1725 "parser.tab.c"
    break;

  case 37: /* expr: expr MUL expr  */
#line 122 "parser.y"
                                { (yyval.a) = newast('*', (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1731 "parser.tab.c"
    break;

  case 38: /* expr: expr DIV expr  */
#line 123 "parser.y"
                                { (yyval.a) = newast('/', (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1737 "parser.tab.c"
    break;

  case 39: /* expr: expr POW expr  */
#line 124 "parser.y"
                                { (yyval.a) = newast('^', (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1743 "parser.tab.c"
    break;

  case 40: /* expr: expr MOD expr  */
#line 125 "parser.y"
                                { (yyval.a) = newast('%', (yyvsp[-2].a),(yyvsp[0].a)); }
#line 1749 "parser.tab.c"
    break;

  case 41: /* expr: ABS expr ABS  */
#line 126 "parser.y"
                                { (yyval.a) = newast('|', (yyvsp[-1].a), NULL); }
#line 1755 "parser.tab.c"
    break;

  case 42: /* expr: MINUS expr  */
#line 127 "parser.y"
                                { (yyval.a) = newast('M', (yyvsp[0].a), NULL); }
#line 1761 "parser.tab.c"
    break;

  case 43: /* expr: '(' expr ')'  */
#line 128 "parser.y"
                                { (yyval.a) = (yyvsp[-1].a); }
#line 1767 "parser.tab.c"
    break;

  case 44: /* expr: value  */
#line 129 "parser.y"
                                { (yyval.a) = (yyvsp[0].a); }
#line 1773 "parser.tab.c"
    break;

  case 45: /* expr: funcall  */
#line 130 "parser.y"
                                { (yyval.a) = (yyvsp[0].a); }
#line 1779 "parser.tab.c"
    break;

  case 46: /* value: %empty  */
#line 132 "parser.y"
                {(yyval.a) = NULL;}
#line 1785 "parser.tab.c"
    break;

  case 47: /* value: NUM  */
#line 133 "parser.y"
                { (yyval.a) = newnum((yyvsp[0].num));}
#line 1791 "parser.tab.c"
    break;

  case 48: /* value: BINARY  */
#line 134 "parser.y"
                { (yyval.a) = newnum((yyvsp[0].num)); }
#line 1797 "parser.tab.c"
    break;

  case 49: /* value: ROMAN  */
#line 135 "parser.y"
                { (yyval.a) = newnum((yyvsp[0].num)); }
#line 1803 "parser.tab.c"
    break;

  case 50: /* value: ID  */
#line 136 "parser.y"
                { (yyval.a) = newref((yyvsp[0].s)); }
#line 1809 "parser.tab.c"
    break;

  case 51: /* value: STR  */
#line 137 "parser.y"
                { (yyval.a) = newstr((yyvsp[0].st)); }
#line 1815 "parser.tab.c"
    break;

  case 52: /* value: list  */
#line 138 "parser.y"
                { (yyval.a) = (yyvsp[0].a); }
#line 1821 "parser.tab.c"
    break;

  case 53: /* list: '[' ']'  */
#line 140 "parser.y"
                      { (yyval.a) = NULL; }
#line 1827 "parser.tab.c"
    break;

  case 54: /* list: '[' explist ']'  */
#line 141 "parser.y"
                      { (yyval.a) = (yyvsp[-1].a); }
#line 1833 "parser.tab.c"
    break;

  case 56: /* explist: expr ',' explist  */
#line 145 "parser.y"
                       { (yyval.a) = newast('[', (yyvsp[-2].a), (yyvsp[0].a)); }
#line 1839 "parser.tab.c"
    break;

  case 57: /* symlist: ID  */
#line 147 "parser.y"
                     { (yyval.sl) = newsymlist((yyvsp[0].s), NULL); }
#line 1845 "parser.tab.c"
    break;

  case 58: /* symlist: ID ',' symlist  */
#line 148 "parser.y"
                     { (yyval.sl) = newsymlist((yyvsp[-2].s), (yyvsp[0].sl)); }
#line 1851 "parser.tab.c"
    break;

  case 59: /* return: RETURN expr  */
#line 150 "parser.y"
                     { (yyval.a) = newast('R', (yyvsp[0].a), NULL); }
#line 1857 "parser.tab.c"
    break;

  case 60: /* ufunction: DEFINE ID '(' symlist ')' '{' stmts '}'  */
#line 152 "parser.y"
                                                    { dodef((yyvsp[-6].s),(yyvsp[-4].sl),(yyvsp[-1].a)); (yyval.a) = newdeclare((yyvsp[-6].s));/* printf("Function %s defined\n", $2->name);*/ }
#line 1863 "parser.tab.c"
    break;

  case 61: /* ufunction: DEFINE ID '(' ')' '{' stmts '}'  */
#line 153 "parser.y"
                                                    { dodef((yyvsp[-5].s),NULL,(yyvsp[-1].a)); (yyval.a) = newdeclare((yyvsp[-5].s)); /*printf("Function %s defined\n", $2->name);*/ }
#line 1869 "parser.tab.c"
    break;

  case 62: /* funcall: ID '(' explist ')'  */
#line 155 "parser.y"
                            { (yyval.a) = newcall((yyvsp[-3].s), (yyvsp[-1].a)); }
#line 1875 "parser.tab.c"
    break;

  case 63: /* funcall: FUNC '(' explist ')'  */
#line 156 "parser.y"
                            { (yyval.a) = newfunc((yyvsp[-3].fn), (yyvsp[-1].a)); }
#line 1881 "parser.tab.c"
    break;


#line 1885 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 159 "parser.y"


int main(int argc, char **argv) {

    if(argc < 2) { /* just read stdin */
        yyparse();
        return 0;
    }
    for(int i = 1; i < argc; i++) {
        FILE *f = fopen(argv[i], "r");
        if(!f) {
            perror(argv[i]);
            return (1);
        }
        yyin = f;
        yyparse();
        fclose(f);
    }
    return 0;
}
