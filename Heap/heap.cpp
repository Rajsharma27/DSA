#include <bits/stdc++.h>
using namespace std;

void insert(int arr[],int n){
    int i=n,temp;
    temp = arr[i];

    while(i>1 && temp>arr[i/2]){
        arr[i] = arr[i/2];
        i = i/2;
    }
    arr[i] = temp;
}

int Delete(int arr[],int n){
    int i,j,x,val;
    val = arr[1];
    x = arr[n];
    arr[1] = arr[n];
    i=1;j=2*i;

    while(j<n-1){
        if(arr[j+1]>arr[j]){
            j=j+1;
        }
        if(arr[i]<arr[j]){
            swap(arr[i],arr[j]);
            i=j;
            j=2*j;
        }
        else
            break;
    }
    return val;
}

int main(){
}