#include<iostream>
using namespace std;
int binarySearch(int n){
    int s=0;
    int e=n;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e){
    
    int square = mid*mid;
    if(square==n){
        return mid;
    }
    if(square<n){
        ans=mid;
        s=mid+1;
    } 
    else{
        e=mid-1;
    }
    mid = s + (e-s)/2;
}
return ans;
}

int findRoot(int x){
    return binarySearch(x);

}
double final(int n, int point, int temp){
     double factor = 1;
     double ans = temp;

     for(int i=0;i<point;i++){
        factor = factor/10;
        for(double j=ans;j*j<n; j=j+factor){
            ans=j;
        }

     }
     
return ans;
}
int main(){
    int n;
    cin>>n;
    int temp = findRoot(n);
    cout<<"answer is : "<<final(n,3,temp)<<endl;

}