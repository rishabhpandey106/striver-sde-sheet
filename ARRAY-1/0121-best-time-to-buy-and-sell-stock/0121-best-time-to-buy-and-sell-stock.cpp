class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0;
        int pro = INT_MAX;
        int n = prices.size();
        for(int i=0;i<n;i++)
        {
            pro = min(pro , prices[i]);
            int sum = prices[i] - pro;
            maxpro = max(maxpro , sum);
        }
        return maxpro;
    }
};