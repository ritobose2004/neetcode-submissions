class Solution {
public:
    int findMin(vector<int> &nums) {
        int mini=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<mini){
                return nums[i];
            }
        }
        return nums[0];

    }
};
