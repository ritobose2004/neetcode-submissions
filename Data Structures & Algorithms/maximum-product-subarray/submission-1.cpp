class Solution {
   public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
          int product = nums[i];
            maxi = max(product, maxi);
            for (int j = i+1; j < nums.size(); j++) {
                product *= nums[j];
                maxi = max(product, maxi);
            }
        }
        return maxi;
    }
};
