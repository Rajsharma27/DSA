class Solution {
public:
    void solve(string& s, unordered_set<string>& wordset, string sentence, vector<string>& v, int start) {
        if (start == s.size()) {
            sentence.pop_back(); 
            v.push_back(sentence);
            return;
        }

        for (int i = start; i < s.size(); i++) {
            string word = s.substr(start, i - start + 1);

            if (wordset.find(word) != wordset.end()) {
                solve(s, wordset, sentence + word + " ", v, i + 1);
            }
        }
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordset(wordDict.begin(), wordDict.end());
        vector<string> v;

        solve(s, wordset, "", v, 0);
        return v;
    }
};