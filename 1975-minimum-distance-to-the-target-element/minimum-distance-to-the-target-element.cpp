class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int mn = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) {
            int dist = abs(i-start);
            mn = min(mn,dist);
            }
        }
        return mn;
    }
};