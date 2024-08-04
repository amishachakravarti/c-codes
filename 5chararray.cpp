#include<iostream>
using namespace std;
int main(){
    //int n;
   // printf("Enter n:= ");
   // scanf("%d",&n);
    char ch[4];
    
    for(int i=0;i<4;i++){
        cout<<"Enter "<<i+1<<"th character := ";
        cin>>ch[i];
           
    }
    for(int i=0;i<4;i++){
        cout<<ch[i]<<" ";

    }
    
}