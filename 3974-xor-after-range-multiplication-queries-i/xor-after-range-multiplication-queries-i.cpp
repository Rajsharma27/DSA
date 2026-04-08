class Solution {
public:
    void helper(vector<int>& nums,const vector<int> query){
        int l1 = query[0];
        int r1 = query[1];
        int k1 = query[2];
        int v1 = query[3];
        const int MOD = 1e9 + 7;
        for(int i=l1;i<=r1;i+=k1){
            nums[i] = (1LL*nums[i]*v1) % (MOD);
        }
    }
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(auto& q: queries){
            helper(nums, q);
        }
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans ^= nums[i];
        }
        return ans;
    }
};