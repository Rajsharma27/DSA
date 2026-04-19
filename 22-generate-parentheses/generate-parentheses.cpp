class Solution {
public:
    void solve(int n, vector<string>& ans, string path, int ocnt, int ccnt){
        if(path.size()==2*n){
            ans.push_back(path);
            return;
        }
        if(ocnt<n)
        {
            path+='(';
            solve(n,ans,path,ocnt+1,ccnt);
            path.pop_back();
        }
        if(ccnt<ocnt)
        {
            path+=')';
            solve(n,ans,path,ocnt,ccnt+1);
            path.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string path;
        solve(n,ans,path,0,0);
        return ans;
    }
};