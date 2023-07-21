class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0;
        int c2 = 0;
        int elem1 = INT_MIN;
        int elem2 = INT_MIN;
        int bound = ceil(nums.size()/3);
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(c1 == 0 && nums[i] != elem2)
            {
                c1++;
                elem1 = nums[i];
            }
            else if(c2 == 0 && nums[i] != elem1)
            {
                c2++;
                elem2 = nums[i];
            }
            else if(nums[i] == elem1)
            {
                c1++;
            }
            else if(nums[i] == elem2)
            {
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        
        int cn1 = 0, cn2 =0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == elem1)
            {
                cn1++;
            }
            if(nums[i] == elem2)
            {
                cn2++;
            }
        }
        
        if(cn1 > bound)
        {
            v.push_back(elem1);
        }
        if(cn2 > bound)
        {
            v.push_back(elem2);
        }
        
        return v;
    }
};