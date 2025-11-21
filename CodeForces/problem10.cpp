#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    
    int odd = 0;  
    int even = 0; 

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (i % 2 == 0)  
                odd++;
            else             
                even++;
        }
    }

    if (odd > even) cout << "Ajisai\n";
    else if (even > odd) cout << "Mai\n";
    else cout << "Tie\n";

}

int main(){
    int q;
    std::cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}