class Solution {
public:
    void solve(string s, vector<string>& path, vector<string>& ans,int idx){
        if(path.size()==4){
            if(idx==s.size()){
                ans.push_back(path[0]+'.'+path[1]+'.'+path[2]+'.'+path[3]);
            }
            return;
        }
        for(int i=1;i<=3;i++){
            if (idx + i > s.size()) break;
            string part = s.substr(idx, i);
            if ((part.size() > 1 && part[0] == '0') || stoi(part) > 255)
                continue;
            path.push_back(part);
            solve(s, path, ans, idx + i);
            path.pop_back();
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        vector<string> path;
        solve(s, path, ans, 0);
        return ans;
    }
};