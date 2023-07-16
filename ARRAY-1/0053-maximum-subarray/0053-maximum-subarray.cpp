class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int sum = 0;
        // int maxsum = INT_MIN;
        // for(auto i : nums)
        // {
        //     sum  = max( i , sum + i);
        //     maxsum = max(maxsum , sum);
        // }
        // return maxsum;
        
        long long sum = 0;
        long long maxsum = LONG_MIN;
        for(auto i : nums)
        {
            sum += i;
            
            if(sum > maxsum)
            {
                maxsum = sum;
            }
            
            if(sum < 0)
            {
                sum = 0;
            }
        }
        return maxsum;
    }
};