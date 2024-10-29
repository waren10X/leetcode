int maxProfit(int* prices, int pricesSize)
{
    int maxProfit;
    int i;

    maxProfit = 0;
    i = 1;
    while (i < pricesSize)
    {
        if (prices[i] > prices[i - 1])
        {
            maxProfit += prices[i] - prices[i - 1];
        }
        i++;
    }
    
    return (maxProfit);
}