class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int> mp;
        vector<int> v;
        
        // for(int i=0;i<nums.size();i++)
        // {
        //     mp[nums[i]]++;
        //     mp[target - nums[i]]++;
        // }
        // int sol = 0;
        // for(auto it : mp)
        // {
        //     if(it.second == 2)
        //     {
        //         sol = it.second;
        //     }
        // }
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i] == sol)
        //     {
        //         v.push_back(i);
        //         sol = target - sol;
        //     }
        //     if(nums[i] == sol)
        //     {
        //         v.push_back(i);
        //     }
        // }
        
        for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            v.push_back(mp[complement]);
            v.push_back(i);
        }
        mp[nums[i]] = i;
        }
        return v;
    }
};