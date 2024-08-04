#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:= ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
              }
              int h=1;
        for(int k=0;k<=i;k++){
            cout<<h<<" ";
            h=h*(i-k)/(k+1);
            
        }  
        cout<<endl;     
    }
}