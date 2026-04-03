class Solution {
  public:
    
    void solve(string &s, int k, string &maxi, int index) {
        
        if (s > maxi) {
            maxi = s;
        }
        
        if (k == 0) return;

        int n = s.size();

        for (int i = index; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                
                if (s[j] > s[i]) {
                    swap(s[i], s[j]);

                    solve(s, k - 1, maxi, i + 1);
                    swap(s[i], s[j]);
                }
            }
        }
    }

    string findMaximumNum(string& s, int k) {
        string maxi = s;

        solve(s, k, maxi, 0);

        return maxi;
    }
};