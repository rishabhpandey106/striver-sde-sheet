class Solution {
public:
    double myPow(double x, int n) {
        long long nn = abs(n);
        double c = 1;
        if(n == 0)
        {
            return 1;
        }
        while(nn)
        {
            if(nn % 2 == 0)
            {
                x = x * x;
                nn = nn / 2;
            }
            else
            {
                c = c * x;
                nn--;
            }
        }
        if(n>0)
        {
            return c;
        }
        else
        {
            return 1/c;
        }
    }
};