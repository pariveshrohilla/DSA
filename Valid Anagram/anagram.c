#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}

bool isAnagram(char *s, char *t)
{
    // if length is mis match then it can't be same 
    if (strlen(s) != strlen(t))
        return false;
    
    //sort them and then compare to see is they are equal
    qsort(s, strlen(s), sizeof(char), cmp);
    qsort(t, strlen(t), sizeof(char), cmp);

    // if compare matches then true
    return strcmp(s, t) == 0;
}
