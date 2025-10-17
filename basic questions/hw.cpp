#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;

    int notes=0;
    for(int n=1;n<=4;n++){
    switch(n){
       case 1: notes = num/100;
        num = num-(100*notes);
        cout<<"100 notes required are "<<notes<<endl;
        break;
        case 2: notes = num/50;
        num = num-(50*notes);
        cout<<"50 notes required are "<<notes<<endl;
        break;
        case 3: notes = num/20;
        num = num-(20*notes);
        cout<<"20 notes required are "<<notes<<endl;
        break;
        case 4: notes = num/1;
        num = num-(notes*1);
        cout<<"1 notes required are "<<notes<<endl;
        break;
    }
    }
}