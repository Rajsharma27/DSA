#include<iostream>
using namespace std;
int findPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int binarySearch(int arr[], int s,int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2; 

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int keyFind(int arr[],int n,int key){
    
    int pivot = findPivot(arr,n);
    
        if(key>=arr[pivot] && key<=arr[n-1]){
            return binarySearch(arr,pivot,n-1,key);
        }
        else{
            return binarySearch(arr,0,pivot-1,key);
        }
        

    }



int main(){
    int arr[5] = {7,9,1,2,3};
    cout<<"key index is :"<<keyFind(arr,5,2)<<endl;


}