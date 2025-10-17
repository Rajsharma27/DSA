#include<iostream>
using namespace std;
int selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex = 0;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[minIndex])
            minIndex=i;
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}