class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        set<int> st;
        for (int i = 0; i < numbers.size(); i++) {
            for (int j = 1; j < numbers.size(); j++) {
                if ((i != j) && (numbers[i] + numbers[j] == target)) {
                    if (st.find(i + 1) == st.end()) {
                        st.insert(i + 1);
                    }
                    if (st.find(j + 1) == st.end()) {
                        st.insert(j + 1);
                    }
                }
            }
        }
        for (auto it : st) {
            ans.push_back(it);
        }
        return ans;
    }
};
