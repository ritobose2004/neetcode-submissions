class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>st;
       for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                if(nums[i]+nums[j]+nums[k]==0){
                   vector<int>pre={nums[i],nums[j],nums[k]};
                   sort(pre.begin(),pre.end());
                    if(st.find(pre)==st.end()){
                        st.insert(pre);
                        ans.push_back(pre);
                    }
                }
            }
        }
       }
       return ans;
    }
};
