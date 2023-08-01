class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        // set<vector<int>> st;
        // int n = nums.size();
        // for(int i=0;i<n-1;i++)
        // {
        //     set<int> hashset;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         int rem = -1*(nums[i] + nums[j]);
        //         if(hashset.find(rem) !=  hashset.end())
        //         {
        //             vector<int> temp = {rem , nums[i] , nums[j]};
        //             sort(temp.begin() , temp.end());
        //             st.insert(temp);
        //         }
        //         hashset.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>> v(st.begin() , st.end());
        // return v;
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-2; i++){
            int low = i+1, high = n-1;
            while(low < high){
                if(nums[i] + nums[low] + nums[high] < 0){
                    low++;
                }
                else if(nums[i] + nums[low] + nums[high] > 0){
                    high--;
                }
                else{
                    set.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};