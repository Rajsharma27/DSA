class Solution {
public:
    int minCost(vector<int>& arr) {
        int total = 0;
        std::priority_queue<int, vector<int>, greater<int>> minHeap(arr.begin(),arr.end());
        
        while(minHeap.size()>1){
            int first = minHeap.top();
            minHeap.pop();
            int second = minHeap.top();
            minHeap.pop();
            int cost = first + second;
            total += cost;
            minHeap.push(cost);
        }
        return total;
    }
};
