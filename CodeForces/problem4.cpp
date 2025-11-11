#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<long long> primes = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
        73, 79, 83, 89, 97
    };
    while (t--) {
        int n;
        cin>>n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i){ 
            cin >> a[i];
        }

        bool found=false;

        for(long long p: primes){
            for(long long ai: a){
                if(__gcd(ai,p) == 1){
                    cout<< p<< "\n";
                    found = true;
                    break;
                }
            }
            if(found){
                break;
            }
        }
        if (!found) cout << -1 << "\n";    
    }
    return 0;
}