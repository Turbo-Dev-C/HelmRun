#include "lexer.h"

tocken code_to_tocken(char* c)
{

}

size_t toclen(tocken t)
{
    size_t result;
    for (int i = 0;i < t.s;i++)
    {
        result += strlen(t.v[i]);
    }
    return result;
}

char* tocken_to_code(tocken t)
{
    char* r = (char*)malloc(toclen(t));
    if (r == NULL)
    {
        return NULL;
    }
    for (int i = 0;i < toclen(t);i++)
    {
        for (int j = 0;j < strlen(t.v[i]);j++)
        {
            r[j] = t.v[i][j];
        }
    }
    return r;
}