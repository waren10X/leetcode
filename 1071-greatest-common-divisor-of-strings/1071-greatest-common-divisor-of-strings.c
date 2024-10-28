#include <stdio.h>
#include <string.h>

char* gcdOfStrings(char* str1, char* str2)
{
    int len1;
    int len2;
    int gcdLength;

    len1 = strlen(str1);
    len2 = strlen(str2);
    gcdLength = len1 < len2 ? len1 : len2;
    for (int i = gcdLength; i > 0; i--)
    {
        if (len1 % i == 0 && len2 % i == 0)
        {
            int match = 1;
            for (int j = 0; j < len1; j += i)
            {
                if (strncmp(str1, str1 + j, i) != 0)
                {
                    match = 0;
                    break;
                }
            }
            for (int j = 0; j < len2; j += i)
            {
                if (strncmp(str1, str2 + j, i) != 0)
                {
                    match = 0;
                    break;
                }
            }
            if (match)
            {
                str1[i] = '\0';
                return str1;
            }
        }
    }
    return "";
}
