int getValue(char c)
{
    if (c == 'I')
    {
        return (1);
    }
    if (c == 'V')
    {
        return (5);
    }
    if (c == 'X')
    {
        return (10);
    }
    if (c == 'L')
    {
        return (50);
    }
    if (c == 'C')
    {
        return (100);
    }
    if (c == 'D')
    {
        return (500);
    }
    if (c == 'M')
    {
        return (1000);
    }
    return (0);
}

int romanToInt(char* s)
{
    int total;
    int length;
    int i;
    char currentChar;
    char nextChar;
    int currentValue;
    int nextValue;
    
    i = 0;
    total = 0;
    length = 0;

    while (s[length] != '\0')
    {
        length++;
    }
    while (i < length)
    {
        currentChar = s[i];
        currentValue = getValue(currentChar);

        if (i + 1 < length)
        {
            nextChar = s[i + 1];
            nextValue = getValue(nextChar);
        }
        else
        {
            nextChar = '\0';
            nextValue = 0;
        }
        if (nextValue > currentValue)
        {
            total = total - currentValue;
        }
        else
        {
            total = total + currentValue;
        }
        i = i + 1;
    }
    return (total);
}