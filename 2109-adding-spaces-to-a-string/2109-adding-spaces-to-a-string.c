#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addSpaces(char* s, int* spaces, int spacesSize)
{
    int originalLength;
    int newLength;
    char* result;
    int spacesIndex;
    int resultIndex;
    int sIndex;

    originalLength = strlen(s);
    newLength = originalLength + spacesSize;
    result = (char*)malloc((newLength + 1) * sizeof(char));
    sIndex = 0;
    spacesIndex = 0;
    resultIndex = 0;

    while (sIndex < originalLength)
    {
        if (spacesIndex < spacesSize && spaces[spacesIndex] == sIndex)
        {
            result[resultIndex] = ' ';
            resultIndex++;
            spacesIndex++;
        }
        
        result[resultIndex] = s[sIndex];
        resultIndex++;
        sIndex++;
    }
    
    result[resultIndex] = '\0';
    return (result);
}