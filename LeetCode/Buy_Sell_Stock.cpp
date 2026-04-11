// Problem: 121

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy=prices[0];
        int MaxProfit=0;
        for(int i:prices)
        {   
            if(i >bestBuy)
            {
                 MaxProfit=max( MaxProfit,i-bestBuy);
            }
            bestBuy= min(bestBuy,i);
        }
        return  MaxProfit;

    }
};