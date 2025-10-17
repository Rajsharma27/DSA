#include<iostream>
#include<set>
using namespace std;
int main(){

    set<int> s;     //it stores unique elements and stores in sorted order

    s.insert(0);
    s.insert(10);
    s.insert(4);
    s.insert(15);
    s.insert(1);

    for(auto i:s){
        cout<<i<<endl;
    }

}
    
