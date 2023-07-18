class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int f = m-1;
        int s = 0;
        
        while(f >= 0 && s < n)
        {
            if(nums1[f] > nums2[s])
            {
                swap(nums1[f] , nums2[s]);
                f--;
                s++;
            }
            else
            {
                break;
            }
        }
        
        sort(nums2.begin() , nums2.end());
        
        for(int i=0;i<n;i++)
        {
            nums1[m+i] = nums2[i];
        }
        
        sort(nums1.begin() , nums1.end());
    }
};