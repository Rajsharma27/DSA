class Solution {
public:
    string helper(string& s1, string& s2) {
        int n = s1.size();
        int m = s2.size();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        
        int max_len = 0;
        int end_index = 0;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){

                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;

                    if(dp[i][j] > max_len){
                        int original_start = i - dp[i][j];
                        int reversed_start = m - j;

                        if(original_start == reversed_start){
                            max_len = dp[i][j];
                            end_index = i;
                        }
                    }
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }

        return s1.substr(end_index - max_len, max_len);
    }

    string longestPalindrome(string s) {
        string p(s.rbegin(), s.rend());
        return helper(s,p);
    }
};