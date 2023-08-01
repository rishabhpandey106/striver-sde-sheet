class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n = a.size();
        if (n == 0) return 0;
        sort(a.begin(), a.end());
        int lastSmaller = INT_MIN;
        int cnt = 0;
        int longest = 1;

        for (int i = 0; i < n; i++) {
            if (a[i] - 1 == lastSmaller) {
                cnt += 1;
                lastSmaller = a[i];
            }
            else if (a[i] != lastSmaller) {
                cnt = 1;
                lastSmaller = a[i];
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};