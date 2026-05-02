class Solution {
   public:
    void sortColors(vector<int>& nums) {
        int zc = 0;
        int oc = 0;
        int tc = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) zc++;
            if (nums[i] == 1) oc++;
            if (nums[i] == 2) tc++;
        }
        int i = 0;
        while (zc > 0) {
            nums[i] = 0;
            i++;
            zc--;
        }
        while (oc > 0) {
            nums[i] = 1;
            i++;
            oc--;
        }
        while (tc > 0) {
            nums[i] = 2;
            i++;
            tc--;
        }
    }
};