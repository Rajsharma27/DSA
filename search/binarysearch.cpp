#include<iostream>
using namespace std;
//for sorted array only
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1 ;
    int mid = start + (end-start)/2; // for ignoring out of range numbers error

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }

        if(arr[mid]<key){//right part
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int evenarr[5] = {2,4,5,8,9};
    int oddarr[6] = {6,8,9,12,14,15};

    int index = binarySearch(evenarr,6,8);
    cout<<"index is "<<index<<endl;


    return 0;
}