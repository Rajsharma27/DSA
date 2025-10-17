#include<iostream>
#include<queue>
using namespace std;
int main(){
    // Max Heap
    priority_queue<int> maxi;
    
    // Max Heap
    priority_queue<int, vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    int n= maxi.size();
    for(int i=0; i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();   //  it always gives maximum element when fetched
    }cout<<endl;
} 