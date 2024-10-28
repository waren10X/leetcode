#include <string.h>

#define MAX_LENGTH 202
char * mergeAlternately(char * word1, char * word2)
{
    static char merged[MAX_LENGTH];
    int len1;
    int len2;
    int i;
    int j;
    int k;

    len1 = strlen(word1);
    len2 = strlen(word2);
    i = 0;
    j = 0;
    k = 0;
    while (i < len1 && j < len2)
    {
        merged[k++] = word1[i++];
        merged[k++] = word2[j++];
    }
    while (i < len1)
    {
        merged[k++] = word1[i++];
    }
    while (j < len2)
    {
        merged[k++] = word2[j++];
    }
    merged[k] = '\0';
    return merged;
}
