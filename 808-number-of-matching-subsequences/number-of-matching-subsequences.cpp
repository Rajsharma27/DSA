class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>> pos(26);
        for (int i = 0; i < s.size(); i++) {
            pos[s[i] - 'a'].push_back(i);
        }

        int count = 0;

        for (string &word : words) {
            int prev = -1;
            bool isSub = true;

            for (char c : word) {
                auto &v = pos[c - 'a'];
                auto it = upper_bound(v.begin(), v.end(), prev);
                if (it == v.end()) {
                    isSub = false;
                    break;
                }
                prev = *it;
            }

            if (isSub) count++;
        }

        return count;
    }
};
