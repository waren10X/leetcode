
int* finalPrices(int* prices, int pricesSize, int* returnSize)
{
    int* result;
    int i;
    int j;

    result = (int*)malloc(pricesSize * sizeof(int));

    for (i = 0; i < pricesSize; i++)
    {
        result[i] = prices[i];
        for (j = i + 1; j < pricesSize; j++)
        {
            if (prices[j] <= prices[i])
            {
                result[i] = prices[i] - prices[j];
                break;
            }
        }
    }
    *returnSize = pricesSize;
    return (result);
}
