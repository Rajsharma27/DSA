#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

            if(a[0] == -1 && a[n-1]== -1){
                a[0]=0;
                a[n-1]=0;
            }
            else if (a[0] == -1) {
            a[0] = a[n - 1];
        }
        else if (a[n - 1] == -1) {
            a[n - 1] = a[0];
        }

        for (int i = 1; i < n - 1; i++) {
            if (a[i] == -1) a[i] = 0;
        }

        long long ans = llabs(a[n - 1] - a[0]);

        cout << ans << "\n";
        for (long long x : a) cout << x << " ";
        cout << "\n";

}

int main(){
    int q;
    std::cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}