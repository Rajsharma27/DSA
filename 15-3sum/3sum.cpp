class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            unordered_set<int> st;
            for(int j = i + 1; j < nums.size(); j++) {

                int third = -(nums[i] + nums[j]);
                if(st.count(third)) {
                    ans.push_back({nums[i], third, nums[j]});
                    while(j + 1 < nums.size() && nums[j] == nums[j+1])
                        j++;
                }
                st.insert(nums[j]);
            }
        }
        return ans;
    }
};