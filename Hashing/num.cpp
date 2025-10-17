#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int number;
    cout<<"enter number"<<endl;
    cin>>number;

    int hash[13]={0};

    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }
    cout<<hash[number]<<endl;



}