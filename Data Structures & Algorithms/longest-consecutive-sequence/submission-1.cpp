class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;
        int count = 1;
        int maxi = 1;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) continue;
            if (nums[i] - nums[i - 1] == 1) {
                count++;
            } else {
                maxi = max(maxi, count);
                count = 1;
            }
        }
        return max(maxi, count);
    }
};
