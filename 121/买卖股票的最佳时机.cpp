int maxProfit(int* prices, int pricesSize){     
    int max=0,min=prices[0],ans=0;
    for(int i=0;i<pricesSize;i++)
    {
        if(prices[i]<min)
        min=prices[i];
        else
        {
            max=prices[i]-min;
            if(max>ans)
            ans=max;
        }

    }
    return ans;
}