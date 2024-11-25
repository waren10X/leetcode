int isPalindrome(int x)
{
    int original;
    int reversed;
    int digit;

    original = x;
    reversed = 0;
    
    if (x < 0)
    {
        return (0);
    }

    while (x > 0)
    {
        digit = x % 10;
        
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > INT_MAX % 10))
        {
            return (0);
        }
        
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return (original == reversed);
}
