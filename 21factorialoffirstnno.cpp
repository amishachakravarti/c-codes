#include<iostream>
using namespace std;
fac(int x){
    int fac=1,i=2;
    while(i<=x){
        fac*=i;
        i++;
    }
    return fac;

}

int main(){
    int n;
    cout<<"Enter n:=";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fac(i)<<"\n";

    
    
    }}