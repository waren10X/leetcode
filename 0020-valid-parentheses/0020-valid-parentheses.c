bool isValid(char* s)
{
    char stack[10000];
    char topChar;
    char c;
    int top;
    int i;

    top = -1;
    
    for (i = 0; s[i] != '\0'; i++)
    {
        c = s[i];

        if (c == '(' || c == '[' || c == '{')
        {
            top++;
            stack[top] = c;
        }
        else
        {
            if (top == -1)
            {
                return false;
            }
            
            topChar = stack[top];
            top--;

            if ((c == ')' && topChar != '(') || (c == ']' && topChar != '[') || (c == '}' && topChar != '{'))
            {
                return false;
            }
        }
    }
    
    return (top == -1);
}