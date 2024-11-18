int* decrypt(int* code, int codeSize, int k, int* returnSize)
{
    int* result;
    int i, j, sum, nextIndex, nextValue, previousIndex, previousValue;

    result = malloc(codeSize * sizeof(*result));
    *returnSize = codeSize;

    if (k == 0)
    {
        for (i = 0; i < codeSize; i++)
        {
            result[i] = 0;
        }
        return result;
    }
    if (k > 0)
    {
        for (i = 0; i < codeSize; i++)
        {
            sum = 0;
            for (j = 1; j <= k; j++)
            {
                nextIndex = (i + j) % codeSize;
                nextValue = code[nextIndex];
                sum = sum + nextValue;
            }
            result[i] = sum;
        }
    }
    else
    {
        for (i = 0; i < codeSize; i++)
        {
            sum = 0;
            for (j = 1; j <= -k; j++)
            {
                previousIndex = (i - j + codeSize) % codeSize;
                previousValue = code[previousIndex];
                sum = sum + previousValue;
            }
            result[i] = sum;
        }
    }
    return (result);
}