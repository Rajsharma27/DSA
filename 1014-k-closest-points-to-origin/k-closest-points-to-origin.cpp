class Solution {
public:
    int helper(vector<int>& v1, vector<int>& v2) {
    int sum_sq_diff = 0;
    for (int i = 0; i < v1.size(); ++i) {
        int diff = v1[i] - v2[i];
        sum_sq_diff += diff * diff;
    }
    return sum_sq_diff; 
}
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<int> zero(2,0);
        typedef std::pair<int, std::vector<int>> HeapEntry;
        priority_queue<HeapEntry> maxHeap;
        vector<vector<int>> ans;

        for(int i=0;i<n;i++){
            int dist = helper(points[i],zero);
            maxHeap.push({dist,points[i]});
            if(maxHeap.size()>k){
                maxHeap.pop();
            }
        }
        while(!maxHeap.empty()){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};