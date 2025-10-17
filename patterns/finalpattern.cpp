#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;

int i=1;
while(i<=n){
    int space = n-i;
    while(space){
        cout<<" ";
        space--;
    }
    //print 1st triangle
    int j=1;
    while(j<=i){
    cout<<j;
    j++;

}
//print 2nd triangle
int count = i-1;
while(count){
    cout<<count;
    count--;
}




   cout<<endl;
   i++;
}
}