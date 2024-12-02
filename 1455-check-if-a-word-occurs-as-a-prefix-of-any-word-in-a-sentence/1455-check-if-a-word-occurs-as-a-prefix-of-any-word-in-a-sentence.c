int stringLength(const char* str)
{
    int length;

    length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return (length);
}

int isPrefix(const char* word, const char* prefix)
{
    int i;

    i = 0;
    while (prefix[i] != '\0')
    {
        if (word[i] == '\0' || word[i] != prefix[i])
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int isPrefixOfWord(char* sentence, char* searchWord)
{
    int wordIndex;
    int i;
    int wordStart;

    wordIndex = 1;
    i = 0;
    wordStart = 1;
    while (sentence[i] != '\0')
    {
        if (wordStart)
        {
            if (isPrefix(&sentence[i], searchWord))
            {
                return (wordIndex);
            }
            wordStart = 0;
        }
        if (sentence[i] == ' ')
        {
            wordIndex++;
            wordStart = 1;
        }
        i++;
    }
    return (-1);
}