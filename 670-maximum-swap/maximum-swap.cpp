class Solution {
public:
void solve(string &s, int k, string &maxi, int index) {
    
    if (s > maxi) {
        maxi = s;
    }
    if (k == 0) return;
    int n = s.size();

    for (int i = index; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (s[j] > s[i]) {
                swap(s[i], s[j]);
                solve(s, k - 1, maxi, i + 1);
                swap(s[i], s[j]);
            }
        }
    }
}
int maximumSwap(int num) {
    string s = to_string(num);
    string maxi = s;
    solve(s, 1, maxi, 0);

    return stoi(maxi);
}
};