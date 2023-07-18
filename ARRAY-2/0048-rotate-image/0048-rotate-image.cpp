class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // int m = matrix[0].size();
//         vector<vector<int>> copy = matrix;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 copy[i][j] = matrix[m-1-j][i];
//             }
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 matrix[i][j] = copy[i][j];
//             }
//         }
        
        
//         transpose of matrix
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
//         now reverse the entire row for output
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin() , matrix[i].end());
        }
    }
};