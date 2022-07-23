#ifndef STRING_MANIPULATION_H_

#define STRING_MANIPULATION_H_

#include "pch.h"
#include "utils.h"

typedef struct
{
    unsigned char *stream;
    int count;
    int size;
} String;

String CreateEmptyString(void);
String CreateString(const char *stream);
String CreateStringFromFormat(const char *fmt, ...);
void AssignToString(String *str, const char *stream);
void AssignFormatToString(String *str, const char *fmt, ...);
void DeleteString(String str);

// Copy functions:
void CopyString(String *dest, const String *src);
void CopyStringSection(String *dest, const String *src, int start, int end);
void CopyCharStreamSection(String *str, const char *stream, int start, int end);

// Manipulation functions:
void StringToUpper(String *str);
void StringToLower(String *str);

// Scanning functions:
int SearchCharInString(String *str, char c);
int SearchStringSection(String *str, String *section);

// Splitting and joining functions:
Array SplitString(String *str, String *token);

#endif
