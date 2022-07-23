#include "pch.h"
#include "utils.h"
#include "scanner.h"

Token *ScanFile(const char *text)
{
    int numChars = 0;

    for (int i = 0; text[i] != "\0"; ++i)
    {
        ++numChars;
    }

    Array tokens = CreateArray(sizeof(Token), numChars / 2);

    for (int i = 0; i <= numChars; ++i)
    {
        char c = text[i];
        Token t;

        switch (c)
        {
            case '=':
            {
                if (text[i + 1] == '=')
            } break;
            default:
            break;
        }
    }

    return (Token *)tokens.data;
}
