class Solution {
   public:
    int trap(vector<int>& height) {
        int ans = 0;
        int lMax = 0;
        int rMax = 0;
        int start = 0;
        int end = height.size() - 1;
        while (start < end) {
            lMax = max(lMax, height[start]);
            rMax = max(rMax, height[end]);
            if (lMax < rMax) {
                ans += (lMax - height[start]);
                start++;
            } else {
                ans += (rMax - height[end]);
                end--;
            }
        }
        return ans;
    }
};
