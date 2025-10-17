#include<iostream>
using namespace std;
void altSwap(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<"";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    altSwap(arr,n);
    printArr(arr,n);
}