class Solution {
public:
    int helper(vector<int> arr, int k) {
        unordered_map<int,int> mp;
        int j=0;
        int curr_sum = 0;
        int count = 0;
        while(j<arr.size()){
            curr_sum += arr[j];
            
            if(curr_sum==k){
                count++;
            }
            if(mp.find(curr_sum-k)!=mp.end()){
                count += mp[curr_sum-k];
            }
            mp[curr_sum]++;
            j++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        for(int i = 0; i < nums.size(); i++) {
            nums[i] %= 2;
        }

        int count = helper(nums,k);
        return count;
    }
};