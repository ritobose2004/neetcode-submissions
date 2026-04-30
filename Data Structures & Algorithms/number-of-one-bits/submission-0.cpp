class Solution {
   public:
    int hammingWeight(uint32_t n) {
        long a = n;
        int i = 0;
        if (a < 0) {
            return -1;
        }
        while (a > 0) {
            if (a % 2 == 1) {
                i++;
            }
            a /= 2;
        }
        return i;
    }
};
