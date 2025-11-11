#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;
    std::string s, t;
    std::cin >> s >> t;

    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());

    std::cout << (s == t ? "YES" : "NO") << '\n';
}

int main() {
    int q;
    std::cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}