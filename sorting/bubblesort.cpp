#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    bool swapped = false;
    for(int i=1;i<n;i++){ // for the number of rounds
        for(int j=0;j<n-i;j++){ // for comparing the values of adjacent members
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped = true;
        }
    }
    if(swapped==false){
        break; 
    }
    } 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}