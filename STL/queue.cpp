#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    
    q.push("harry");
    q.push("ron");
    q.push("hermoine");

    cout<<"top element "<<q.front()<<endl;
    q.pop();
    cout<<"top element "<<q.front()<<endl;
    
}
