#include<iostream>
using namespace std;
int main(){
    int i;//global variable
    for(i=1;i<=5;i++){
        cout<<i<<" ";
    }
    i+=200;
    cout<<endl<<i;
}
