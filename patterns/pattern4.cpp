#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

int i=1;
while(i<=n){

    int j=1;
    int count=i;
    
    while(j<=n){
        cout <<count;
        count++;
        j++;
    }
    cout<<endl;
    i=i+1;


}
}
/*another approach for this same pattern
while(i<=n){
int j=1;
while(j<2i){
cout<<j<<endl;
j++;
}
cout<<endl;
i++;

}
*/
