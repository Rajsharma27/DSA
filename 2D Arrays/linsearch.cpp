#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int target,int row, int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}
int largestrowsum(int arr[][4],int row, int col){
    int maxi = INT32_MIN;
    int rowindex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum+=arr[row][col];
            }
            if(sum>maxi){
                maxi=sum;
                rowindex=row;
            }
        }
        cout<<"the max sum is : "<<maxi<<endl;
        return rowindex;
}


int main(){
    int target;
    cin>>target;
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int ans = largestrowsum(arr,3,4);
    cout<<"max row is at index"<<ans<<endl;
   // if(ispresent(arr,target,3,4)){
   //     cout<<"element found"<<endl;
   // }
   // else{
   //     cout<<"Not found"<<endl;
//}
}