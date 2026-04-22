class Solution {
   public:
    double myPow(double x, int n) {
        long a = n;
        double ans = 1.0;
        if (a == 0) {
            return ans;
        }
        if (a < 0) {
            x = (1 / x);
            a = -a;
        }
        while (a > 0) {
            if (a % 2 == 1) {
                ans *= x;
            }
            x *= x;
            a /= 2;
        }
        return ans;
    }
};
