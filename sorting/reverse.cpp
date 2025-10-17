#include<iostream>
using namespace std;
void reverse(int arr[],int n, int m){
int start=m+1;
int end=n-1;
while (start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<""; 
    }
    cout<<endl;
}
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    reverse(arr,8,3);
    printArr(arr,8);
}