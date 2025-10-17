#include <iostream>
using namespace std; 
bool binarysearch(int arr[],int s, int e, int k){
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n=6;
    int k=3;
    cout<<boolalpha;
    cout<<"found or not "<<binarysearch(arr,0,5,3)<<endl;

}