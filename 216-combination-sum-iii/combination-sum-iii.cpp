class Solution {
public:
    void solve(int start, int k, int target, vector<int>path, vector<vector<int>>& ans){
        if(target==0 && path.size()==k){
            ans.push_back(path);
            return;
        }
        if(target<0 || path.size()>k) return;

        for(int i=start;i<=9;i++){
            path.push_back(i);
            solve(i+1,k,target-i,path,ans);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> path;
        solve(1,k,n,path,ans);
        return ans;
    }
};