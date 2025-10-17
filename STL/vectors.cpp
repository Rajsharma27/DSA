#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    cout<<"size->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size->"<<v.capacity()<<endl;
    
    cout<<'front'<<v.front()<<endl;
    cout<<'back'<<v.back()<<endl;

    v.pop_back();
    v.clear();

    vector<int> a(5,1);
    vector<int> last(a);   //copy of vector a
}

