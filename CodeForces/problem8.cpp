#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    long long a; 
    cin >> n >> a;

    vector<long long> v(n);
    for (long long &x : v) cin >> x;

    long long less_than_a = 0;
    long long greater_than_a = 0;
    long long equal = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] < a) less_than_a++;
        else if (v[i] > a) greater_than_a++;
        else equal++;
    }
    
    if (less_than_a > greater_than_a) {
        cout<< a-1<<endl;
    } 
    else {
        cout<<a+1<<endl;
    }
}

int main(){
    int q;
    std::cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}