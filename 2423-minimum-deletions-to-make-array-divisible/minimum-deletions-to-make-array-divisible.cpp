class Solution {
public:
    int helper(vector<int>& arr){
        int result = arr[0];
        for(int i=1;i<arr.size();i++){
            result = gcd(result,arr[i]);
            if(result==1) return 1;
        }
        return result;
    }
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int temp = helper(numsDivide);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(temp % nums[i] == 0){
                return i;
            }
        }
        return -1;
    }
};