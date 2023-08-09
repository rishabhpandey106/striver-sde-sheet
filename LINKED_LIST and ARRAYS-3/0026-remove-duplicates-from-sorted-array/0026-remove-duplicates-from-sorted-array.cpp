class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pre = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] != nums[pre])
            {
                nums[pre + 1] = nums[i];
                pre++;
            }
            else
            {
                continue;
            }
        }
        return pre + 1;
    }
};