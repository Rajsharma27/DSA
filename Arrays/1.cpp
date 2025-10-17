#include<iostream>
using namespace std;

int get_min(int num[],int n){
    int min = INT32_MAX;
    for(int i=0;i<n;i++) {
    if(num[i]<min) {
        min = num[i];
    }
    
    }
    return min;

}
int get_max(int num[],int n){
    int max = INT32_MIN;
    for(int i=0;i<n;i++) {
    if(num[i]>max) {
        max = num[i];
    }

    }
    return max;
}

int main() {
    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    
cout<<"max is "<< get_max(num,size) <<endl;
cout<<"min is "<< get_min(num,size) <<endl;

}



