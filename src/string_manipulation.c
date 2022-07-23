#include "string_manipulation.h"

String CreateEmptyString(void)
{
    String s;

    s.stream = NULL;
    s.count = 0;
    s.size = 0;

    return s;
}
