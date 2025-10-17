#include<iostream>
using namespace std;//mountain array
int peakfind(int arr[],int size){
    int s= 0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s ;
}
int main(){
    int arr[5] = {0,1,2,4,1};

    int index = peakfind(arr,5) ;
    cout<< "index is : "<<index<<endl;

}