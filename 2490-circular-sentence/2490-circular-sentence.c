#include <stdbool.h>
#include <string.h>

bool isCircularSentence(char* sentence)
{
    int len;
    int i = 0;

    i = 0;
    len = strlen(sentence);
    if (sentence[0] != sentence[len - 1])
    {
        return false;
    }
    while (i < len)
    {
        if (sentence[i] == ' ')
        {
            if (sentence[i - 1] != sentence[i + 1])
            {
                return false;
            }
        }
        i++;
    }
    return true;
}