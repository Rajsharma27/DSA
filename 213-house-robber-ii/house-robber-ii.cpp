class Solution {
public:
    int robone(vector<int>& nums,int start, int end) {
        int curr = 0;
        int prev = 0;
        for(int i=start;i<=end;i++){
            int temp = curr;
            curr = max(curr,prev+nums[i]);
            prev = temp;
        }
        return curr;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];

        return max(robone(nums,0,n-2),robone(nums,1,n-1));
    }
};