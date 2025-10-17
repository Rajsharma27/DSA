#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("raj");
    s.push("harry");
    s.push("ron");
    s.push("(");

    cout<<"top element "<<s.top()<<endl;
}