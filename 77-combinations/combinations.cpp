class Solution {
public:
    void solve(vector<vector<int>>& res, vector<int> comb, int start, int k, int n){
        if(comb.size()==k){
            res.push_back(comb);
            return;
        }
        for(int i=start; i<=n;i++){
            comb.push_back(i);
            solve(res,comb,i+1,k,n);
            comb.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> comb;
        solve(res,comb,1,k,n);
        return res;
    }
};