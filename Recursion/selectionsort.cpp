#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    if(n==0 || n==1){
        return ;
    }
    int minindex=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[minindex]){
            minindex=i;
        }
    }
    swap(arr[minindex], arr[0]);
    
    selectionsort(arr+1,n-1);

}
int main(){
    int arr[6] = {5, 4, 6, 3, 1, 2};
    int n = 6;

    selectionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}