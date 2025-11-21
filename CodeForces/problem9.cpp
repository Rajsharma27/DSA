#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    if(n%2==1){
        cout<<0<<endl;
    }
    else{
        cout<<floor(n/4+1)<<endl;
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