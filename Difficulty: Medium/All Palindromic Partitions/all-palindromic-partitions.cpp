class Solution {
  public: 
    bool is_palindrome(string s, int i, int j){
        while(i<j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }
        return true;
    }
    void solve(string s, vector<string>& path, int start, vector<vector<string>>& v){
        if(start==s.size()){
            v.push_back(path);
            return;
        }
        for(int i=start;i<s.size();i++){
            if(is_palindrome(s,start,i)){
                path.push_back(s.substr(start,i-start+1));
                solve(s,path,i+1,v);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> palinParts(string &s) {
        // code here
        vector<vector<string>> v;
        vector<string> path;
        solve(s,path,0,v);
        return v;
    }
};