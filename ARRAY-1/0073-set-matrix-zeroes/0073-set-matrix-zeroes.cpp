class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        // 1: basic approach using another space 
        // vector<vector<int>> vis = matrix;

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j] == 0)
        //         {
        //             for(int k=0;k<m;k++)
        //             {
        //                 vis[i][k] = 0;
        //             }
        //         }
        //     }
        // }

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j] == 0)
        //         {
        //             for(int k=0;k<n;k++)
        //             {
        //                 vis[k][j] = 0;
        //             }
        //         }
        //     }
        // }

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         matrix[i][j] = vis[i][j];
        //     }
        // }

        // // 2: basic but does uses extra space
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j] == 0)
        //         {
        //             for(int k=0;k<m;k++)
        //             {
        //                 if(matrix[i][k] != 0)
        //                 {
        //                     matrix[i][k] = -9999
        //                 }
        //             }
        //         }
        //     }
        // }

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j] == 0)
        //         {
        //             for(int k=0;k<n;k++)
        //             {
        //                 if(matrix[k][j] != 0)
        //                 {
        //                     matrix[k][j] = -9999
        //                 }
        //             }
        //         }
        //     }
        // }

        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j] == -9999)
        //         {
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }

        // // 3. array and hash table(unordered set uses hash table to store data whereas set uses binary tree) but stil uses linear space complx.
        // unordered_set<int> row;
        // unordered_set<int> col;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(matrix[i][j] == 0)
        //         {
        //             row.insert(i);
        //             col.insert(j);
        //         }
        //     }
        // }

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(row.count(i) > 0 || col.count(j) > 0)
        //         {
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }

        // 4. using flags optimal case
        bool flag1 = false;
        bool flag2 = false;

        for(int i=0;i<n;i++)
        {
            if(matrix[i][0] == 0)
            {
                flag1 = true;
            }
        }

        for(int j=0;j<m;j++)
        {
            if(matrix[0][j] == 0)
            {
                flag2 = true;
            }
        }

        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        if(flag1)
        {
            for(int i=0;i<n;i++)
            {
                matrix[i][0] = 0;
            }
        }

        if(flag2)
        {
            for(int j=0;j<m;j++)
            {
                matrix[0][j] = 0;
            }
        }
    }
};