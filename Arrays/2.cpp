#include<iostream>
using namespace std;


//array reversal
void reverse(int num[],int n ){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(num[start],num[end]);
        start++;
        end--;
    }

}
void printArr(int num[],int n){
    for(int i=0;i<n;i++){
        cout<< num[i]<<"";
    }
    cout<<endl;
}



int main(){
    

    int num[5] ={2,3,4,5,6} ;

   reverse(num,5);
   printArr(num,5);

}