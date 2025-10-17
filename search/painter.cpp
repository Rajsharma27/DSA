#include<iostream>
using namespace std;
bool boards(int arr[],int n, int m, int mid){
    int painterCount=1;
    int boardsum = 0;
    for(int i=0;i<n;i++){
        if(boardsum+arr[i]<=mid){
            boardsum+=arr[i];
        }
        else{
            painterCount++;
            if(painterCount>m || arr[i]>mid){
                return false;
            }
            boardsum = arr[i];
        } 
    }
    return true;
}
int timereq(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    int e=sum;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(boards(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[6]={2,1,5,6,2,3};
    cout<<"Min time Required is : "<<timereq(arr,6,2);

}