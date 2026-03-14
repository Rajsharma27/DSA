class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mn = INT_MAX;
        int closest = 0;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i]-0)<mn){
                closest = nums[i];
                mn = abs(nums[i]-0);
            }
        }
        if(closest<0){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==abs(closest)){
                   return nums[i]; 
                }
            }
        }
        return closest;
    }
};