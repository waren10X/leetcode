#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseWords(char* s)
{
    int length;
    int i;
    int j;
    
    length = strlen(s);
    i = length - 1;
    j = 0;

    char* temp = (char*)malloc(length + 1);

    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }

    while (i >= 0)
    {
        int end = i;
        while (i >= 0 && s[i] != ' ')
        {
            i--;
        }

        int start = i + 1;
        while (start <= end)
        {
            temp[j++] = s[start++];
        }

        if (i >= 0)
        {
            while (i >= 0 && s[i] == ' ')
            {
                i--;
            }
            if (i >= 0)
            {
                temp[j++] = ' ';
            }
        }
    }

    temp[j] = '\0';
    return temp;
}