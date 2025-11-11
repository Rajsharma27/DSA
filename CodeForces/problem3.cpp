
#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    bool Odd = false, Even = false;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            Even = true;
        } else {
            Odd = true;
        }
    }
    if (Odd && Even) {
        std::sort(a.begin(), a.end());
    }
    for (int i = 0; i < n; i++) {
        std::cout << a[i];
        if (i < n - 1) std::cout << ' ';
    }
    std::cout << '\n';
}
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}