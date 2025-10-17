#include<iostream>
using namespace std;
void update(int **p1){
    //p1=p1+1;
    *p1=*p1+1;
    //**p1=**p1+1;
}
int main(){
    int i=5;
    int *p=&i;
    int **p1=&p;

    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout << "before " << p1 << endl;

    update(p1);

    cout << "After " << i << endl;
    cout << "After " << p << endl;
    cout << "After " << p1 << endl;
}