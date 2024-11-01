#include <stdio.h>

char* makeFancyString(char* s)
{
    int len;
    char* result;
    int j;
    int i;

    len = strlen(s);
    result = (char*)malloc(len + 1);
    j = 0;
    i = 0;
    while (i < len)
    {
        result[j++] = s[i];
        if (j >= 3 && result[j-1] == result[j-2] && result[j-2] == result[j-3])
        {
            j--;
        }
        i++;
    }
    result[j] = '\0';
    return result;
}