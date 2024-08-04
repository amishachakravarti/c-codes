#include<iostream>
using namespace std;
int main(){
    int a,b;
    char d;
    cout<<"Enter a and b:=";
    cin>>a>>d>>b;
    int temp=b;
    b=a;
    a=temp;

    //swap without using third temp variable;
    //a=a+b;
    //b=a-b;
    // a=a-b;
    cout<<a<<","<<b;
}