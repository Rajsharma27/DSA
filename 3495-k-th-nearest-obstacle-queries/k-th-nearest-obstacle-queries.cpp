class Solution {
public:
    int helper(vector<int>& arr){
        return abs(arr[0]) + abs(arr[1]);
    }

    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        priority_queue<int> maxHeap;
        vector<int> ans;
        
        for(int i = 0; i < queries.size(); i++){
            int dist = helper(queries[i]);
            maxHeap.push(dist);
            if(maxHeap.size() > k){
                maxHeap.pop();
            }
            if(maxHeap.size() < k){
                ans.push_back(-1);
            } 
            else{
                ans.push_back(maxHeap.top());
            }
        }
        return ans;
    }
};