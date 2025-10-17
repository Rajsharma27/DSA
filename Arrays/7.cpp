#include<iostream>
using namespace std;
int commonElm(int arr1[], int arr2[], int n, int m){
    for(int i=0;i<n;i++){
        int element = arr1[i];
    
    for(int j=0;j<m;j++){
        if(element < arr2[j]){
            break;
        }
        if(element == arr2[j]){
            return element;
            break;
        }
    }
    }
}

int main(){
    int arr1[5] = {1,9,3,7,8};
    int arr2[6] = {2,9,11,17,13,12};

    cout<< commonElm(arr1,arr2,5,6)<<endl;
   

}
