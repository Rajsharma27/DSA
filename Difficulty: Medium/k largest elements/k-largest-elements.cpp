class Solution {
  public:
    vector<int> kLargest(vector<int>& nums, int k) {
        // Your code here
        priority_queue<int, vector<int>, greater<int>> minHeap;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            minHeap.push(nums[i]);
            if(minHeap.size()>k){
                minHeap.pop();
            }
        }
        while(!minHeap.empty()){
            ans.push_back(minHeap.top());
            minHeap.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};