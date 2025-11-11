#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    std::cin >> n;
    int x;
    std::vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    std::cin >> x;
    int max = *max_element(a.begin(),a.end());
    int min = *min_element(a.begin(),a.end());


    if(x<=max && x>=min){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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