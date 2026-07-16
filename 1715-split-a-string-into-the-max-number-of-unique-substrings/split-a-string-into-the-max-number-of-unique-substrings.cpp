class Solution {
public:
    int ans = 0;
    unordered_set<string> used;

    void backtrack(string &s, int idx) {
        if (idx == s.size()) {
            ans = max(ans, (int)used.size());
            return;
        }

        string curr;
        for (int i = idx; i < s.size(); i++) {
            curr += s[i];

            if (used.count(curr))
                continue;

            used.insert(curr);       
            backtrack(s, i + 1);      
            used.erase(curr);          
        }
    }

    int maxUniqueSplit(string s) {
        backtrack(s, 0);
        return ans;
    }
};