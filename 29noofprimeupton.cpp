#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:=";
    cin>>n;
    int k=0;
    for(int i=2;i<=n;i++ ){
        for(int j=2;j<i;j++){
            if(i%j==0) {k=1; }

        }
        if(k==0) cout<<i<<" ";
    }}