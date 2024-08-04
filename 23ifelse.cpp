#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter a and b:=";
    cin>>a>>b;
    if(a==b) cout<<"both are equal";
     if(a>b) cout<<"a is greater";
     if(a<b) cout<<"b is greater";//here we also use directly else 
    

} //in if ,if condition each conditional is checked despite above condition is false .
//but in if else condition the next condition (that is if else condition) is check only if the above conditon is false.