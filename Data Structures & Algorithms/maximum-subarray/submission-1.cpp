class Solution {
   public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            int sum = nums[i];
            maxi = max(maxi, sum);
            for (int j = i+1; j < nums.size(); j++) {
                sum += nums[j];
                maxi = max(maxi, sum);
            }
        }
        return maxi;
    }
};
