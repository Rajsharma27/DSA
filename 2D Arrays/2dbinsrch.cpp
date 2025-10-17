#include<iostream>
using namespace std;
int binsrch(int arr[][4],int row, int col,int key){
    int s=0;
    int e=(row*col)-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        
        int element = arr[mid/col][mid%col];
        if(element==key){
            return 1;
        }
        if(element<key){
            s= mid+1;
        }
        else{
            e=mid-1;
        }       
        mid = s+(e-s)/2;
    }
    return 0;
}
int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    cout<<binsrch(arr,3,4,20)<<endl;
}