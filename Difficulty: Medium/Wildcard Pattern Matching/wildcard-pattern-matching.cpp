class Solution {
public:

    vector<vector<int>> dp;

    bool check(string &txt, string &pat, int n, int m){

        if(n == 0 && m == 0) return true;
        if(m == 0) return false;

        if(dp[n][m] != -1) return dp[n][m];

        if(n == 0){
            for(int i=0;i<m;i++){
                if(pat[i] != '*') return dp[n][m] = false;
            }
            return dp[n][m] = true;
        }

        if(txt[n-1] == pat[m-1] || pat[m-1] == '?')
            return dp[n][m] = check(txt,pat,n-1,m-1);

        if(pat[m-1] == '*')
            return dp[n][m] = check(txt,pat,n,m-1) || check(txt,pat,n-1,m);

        return dp[n][m] = false;
    }

    bool wildCard(string &txt, string &pat) {
        int n = txt.size();
        int m = pat.size();

        dp.resize(n+1,vector<int>(m+1,-1));

        return check(txt,pat,n,m);
    }
};