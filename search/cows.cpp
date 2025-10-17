#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
bool isPoss(vector<int>& arr,int n, int k, int mid){
    int cowCount=1;
    int laspos = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-laspos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            laspos=arr[i];
        }
    }
    return false;
}


int cowstall(vector<int>& arr,int n, int k){
    sort(arr.begin(),arr.end());
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    } 
    int e=maxi;
    int ans=-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(isPoss(arr,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> arr = {4,2,1,3,6};

    cout<<"max possible distance is : "<<cowstall(arr,5,2)<<endl;
}
