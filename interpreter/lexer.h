#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char** v;
    int s;
}tocken;

tocken code_to_tocken(char* c);
size_t toclen(tocken t);
char* tocken_to_code(tocken t);

// for fixing
