class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        int m = ceil(n/2);
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it : mp)
        {
            if(it.second > m)
            {
                return it.first;
            }
        }
        return -1;
    }
};