#include<iostream>
using namespace std;

int leftCheck(int arr[], int size, int key){
    int start = 0;
    int end = size-1 ;
    int mid = start + (end-start)/2; 
    int ans = -1;
    while(start<=end){

        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }

        else if(arr[mid]<key){
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int rightCheck(int arr[], int size, int key){
    int start = 0;
    int end = size-1 ;
    int mid = start + (end-start)/2; 
    int ans = -1;

    while(start<=end){

        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }

        else if(arr[mid]<key){
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int arr[5] = {1,2,3,3,9};

    int index1 = leftCheck(arr,5,3);
    cout<<"1st index is: "<<index1<<endl;

    int index2 = rightCheck(arr,5,3);
    cout<<"2nd index is: "<<index2<<endl;

   

    return 0;
}