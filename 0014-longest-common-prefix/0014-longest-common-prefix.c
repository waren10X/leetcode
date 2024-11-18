char* longestCommonPrefix(char** strs, int strsSize)
{
    char* prefix;
    int j;
    int i;
    prefix = strs[0];

    if (strsSize == 0)
    {
        return "";
    }
    for (i = 1; i < strsSize; i++)
    {
        j = 0;
        while (prefix[j] != '\0' && strs[i][j] != '\0' && prefix[j] == strs[i][j])
        {
            j++;
        }
        prefix[j] = '\0';
        if (j == 0)
        {
            return "";
        }
    }
    return prefix;
}