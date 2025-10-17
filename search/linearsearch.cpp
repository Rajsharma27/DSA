#include<iostream>
using namespace std;
int find(int arr[],int n,int key){
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
        }
    }
    return index;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n=5;
    int key=5;
    int ans = find(arr,n,key);
    cout<<ans<<endl;
    
    return 0;
    }