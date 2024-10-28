int maxProfit(int* prices, int pricesSize)
{
    int maxProfit;
    int minPrice;
    int i;
    int currentProfit;

    maxProfit = 0;
    minPrice = prices[0];
    i = 0;

    while (i < pricesSize)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        currentProfit = prices[i] - minPrice;
        if (currentProfit > maxProfit)
        {
            maxProfit = currentProfit;
        }

        i++;
    }
    return (maxProfit);
}
