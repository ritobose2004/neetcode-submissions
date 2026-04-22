class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int ma=0;
        int area=0;
        while(i<j){
            area=min(heights[i],heights[j])*(j-i);
            ma=max(area,ma);
            if(heights[i]<heights[j]){
                i++;
            } 
            else{
                j--;
            }
        }
        return ma;
    }
};