int maxProfit(int* prices, int pricesSize){
    if(pricesSize < 1)
    {
        return 0;
    }
    int prev = 0;
    for(int i=pricesSize-1; i > 0; i--)
    {
        prices[i] = prices[i] - prices[i-1];
    }
    int ret = 0;
    for(int j = 1; j<pricesSize ; j++)
    {
        if(prices[j] > 0)
        {
            ret += prices[j];
        }
    }
    return ret;
}