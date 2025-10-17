#include<iostream>
using namespace std;
int countprime(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(i%2==0){
            count++;
        }
    }
    return count;
}
int main(){
    cout<<countprime(10)<<endl;

}
