class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // base case
        if (prices.size() == 1)
            return 0;
        int low = 0, maxProfit = 0;
        for (int i = 0; i < prices.size(); ++i)
        {
            if (prices[i] < prices[low])
            {
                low = i;
                continue;
            }
            maxProfit = max(maxProfit, prices[i] - prices[low]);
        }
        return maxProfit;
    }
};