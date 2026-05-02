class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int maxi = INT_MIN;
        int i = 0;
        int j = heights.size() - 1;
        while (i < j) {
            area = min(heights[i], heights[j]) * (j - i);
            maxi = max(area, maxi);
            if (heights[i] < heights[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return maxi;
    }
};
