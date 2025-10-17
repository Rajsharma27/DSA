#include<iostream>
using namespace std;
int arr_sum(int arr[],int n){
    if(n==0){
        return arr[0];
    }   
        int sum = arr[n]+arr_sum(arr,n-1);
        return sum;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=arr_sum(arr,n-1);
    cout<<"sum is "<<sum<<endl;
    return 0;
}