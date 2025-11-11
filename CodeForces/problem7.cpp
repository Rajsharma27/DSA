#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        bool dup = true;
        for(int i=1;i+1<a.size();i=i+2){
            if(a[i]!=a[i+1]){
                dup=false;
                break;
            }
        }
        if(dup){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    return 0;
}