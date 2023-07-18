class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n= intervals.size();
        sort(intervals.begin() , intervals.end());
        vector<vector<int>> copy;
        for(int i=0;i<n;i++)
        {
            if(copy.empty() || intervals[i][0] > copy.back()[1])
            {
                copy.push_back(intervals[i]);
            }
            else
            {
                copy.back()[1] = max(copy.back()[1] , intervals[i][1]);
            }
        }
        return copy;
    }
};