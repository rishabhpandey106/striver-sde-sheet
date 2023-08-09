class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int pre = 0;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] != 1)
            {
                count = 0;
            }
            else
            {
                count++;
            }  
            pre = max(pre , count);
        }
        return pre;
    }
};