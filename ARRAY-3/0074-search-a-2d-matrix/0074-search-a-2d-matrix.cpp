class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int count = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(target >= matrix[i][0])
            {
                count = i;
            }
        }
        
        for(int i=0;i<m;i++)
        {
            if(matrix[count][i] == target)
            {
                return true;
            }
        }
        
        return false;
    }
};