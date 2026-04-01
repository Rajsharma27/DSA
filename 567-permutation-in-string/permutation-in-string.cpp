class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26, 0);
        int n = s1.size();

        for (char ch : s1) {
            freq[ch - 'a']++;
        }
        int temp = 0;

        for (int i = 0; i < s2.size(); i++) {
            freq[s2[i] - 'a']--;
            temp++;
            if (temp > n) {
                freq[s2[i - n] - 'a']++;
                temp--;
            }
            if (temp == n) {
                bool ok = true;
                for (int j = 0; j < 26; j++) {
                    if (freq[j] != 0) {
                        ok = false;
                        break;
                    }
                }
                if (ok) return true;
            }
        }

        return false;
    }
};