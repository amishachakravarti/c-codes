#include<iostream>
using namespace std;
int fact(int s){
    int f=1;
    for(int i=1;i<=s;i++){
    f*=i;
    
    }
    return f;
}
int comb(int n,int r){
    int c=fact(n)/(fact(r)*fact(n-r));
    return (c);
}    



int main(){
    int n;
    cout<<"Enter n :=";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
              }
        for(int k=0;k<=i;k++){
            cout<<comb(i,k);
            cout<<" ";
        }  
        cout<<endl;     
    }
}
