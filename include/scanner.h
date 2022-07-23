#ifndef SCANNER_H_

#define SCANNER_H_

#include "string_manipulation.h"

typedef enum tokenType
{
    IDENTIFIER,

    // Operators:
    ASSIGN,
    EQUAL,
    NOT_EQUAL,
    LESS,
    GREATER,
    LESS_EQUAL,
    GREATER_EQUAL,
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    POWER,
    MOD,
    AND,
    OR,
    NOT,
    BIT_AND,
    BIT_OR,
    BIT_NOT,
    BIT_SHIFT_RIGHT,
    BIT_SHIFT_LEFT,
    COLON,
    SEMICOLON,
    COMMA,
    DOT,
    ELLIPSIS,
    REFERENCE,

    // Integer types:
    DECIMAL_INT_LITERAL,
    HEXADECIMAL_INT_LITERAL,
    OCTAL_INT_LITERAL,
    BINARY_INT_LITERAL,
    INT,
    INT8,
    INT16,
    INT32,
    INT64,
    INT128,

    INT8LE,
    INT16LE,
    INT32LE,
    INT64LE,
    INT128LE,

    INT8BE,
    INT16BE,
    INT32BE,
    INT64BE,
    INT128BE,

    // Unsigned integer types:
    UINT,
    UINT8,
    UINT16,
    UINT32,
    UINT64,
    UINT128,

    UINT8LE,
    UINT16LE,
    UINT32LE,
    UINT64LE,
    UINT128LE,

    UINT8BE,
    UINT16BE,
    UINT32BE,
    UINT64BE,
    UINT128BE,

    // Floating point types:
    FLOAT_LITERAL,
    FLOAT,
    FLOAT16,
    FLOAT32,
    FLOAT64,

    FLOATLE,
    FLOAT16LE,
    FLOAT32LE,
    FLOAT64LE,

    FLOATBE,
    FLOAT16BE,
    FLOAT32BE,
    FLOAT64BE,

    // Boolean data types:
    TRUE_LITERAL,
    FALSE_LITERAL,
    BOOL,
    BOOL8,
    BOOL16,
    BOOL32,
    BOOL64,

    // Character data types:
    BYTE_LITERAL,
    CHAR_LITERAL,
    UNICODE_LITERAL,
    STRING_LITERAL,
    BYTE,
    UNICHAR,
    STRING,
    CSTRING,

    // Pointer and reference types:
    MEMADDR,
    REF,

    // Type related types:
    TYPEID,
    ANY,

    // Scoping:
    OPEN_BRACKET,
    CLOSE_BRACKET,
    OPEN_PARENTHESIS,
    CLOSE_PARENTHESIS,
    OPEN_CURLY_BRACKETS,
    CLOSE_CURLY_BRACKETS,

    // Data structures:
    STRUCT,
    ENUM,
    UNION,
    INTERFACE,

    // Functions and flow control:
    FUNC,
    RETURN,
    BREAK,
    IF,
    ELSE,
    ELIF,
    SWITCH,
    CASE,
    FOR,

    // Built-in functions:
    PRINT,
    SIZEOF,
    TYPEOF,
    LENGTH,
    ARGS,
    ALLOC,
    DELETE

} TokenType;

typedef struct token
{
    TokenType type;
    String value;
} Token;

// Returns pointer to array of tokens in a given file.
// The token array needs to be freed from memory after its use.
Token *ScanFile(const char *text);

#endif