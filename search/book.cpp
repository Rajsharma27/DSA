#include<iostream>
using namespace std;
bool isPoss(int arr[],int n, int m,int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum = pageSum+arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocation(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    int e=sum;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(isPoss(arr,n,m,mid)){
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
    int arr[4] = {12,34,67,90};

    cout<<"best way is : "<<allocation(arr,4,2)<<endl;

}