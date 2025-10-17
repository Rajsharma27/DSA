#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    char c;
    cin>>c;

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    cout<<hash[c-'a']<<endl;
}