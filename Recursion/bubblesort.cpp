#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    if(n==0 || n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,n-1);
}
int main(){
    int arr[6] = {5,4,6,3,1,2};
    int n=6;

    bubblesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}