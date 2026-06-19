class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> st;
        int i = 0;
        long long sum = 0;
        long long ans = 0;

        for(int j=0;j<nums.size();j++){

            while(st.count(nums[j])){
                sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }

            st.insert(nums[j]);
            sum += nums[j];

            if(j-i+1 > k){
                sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }

            if(j-i+1 == k){
                ans = max(ans,sum);
            }
        }
        return ans;
    }
};