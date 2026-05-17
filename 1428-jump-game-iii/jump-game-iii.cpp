class Solution {
    bool solve(vector<int>& arr, int i, vector<bool> &vis){
        if(i<0 || i>=arr.size()) return false;
        if(arr[i]==0) return true;
        
        if(vis[i]) return false;
        vis[i]=true;
        if(solve(arr,i+arr[i],vis)) return true;
        if(solve(arr,i-arr[i],vis)) return true;

        return false;
    }
public:
    bool canReach(vector<int>& arr, int start) {
        vector<bool> vis(arr.size(),false);
        return solve(arr,start,vis);
    }
};