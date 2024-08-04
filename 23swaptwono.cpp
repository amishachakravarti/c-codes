//pass by value
#include<iostream>
using namespace std;
swap(int a,int b){
    int temp;
    temp=b;
    b=a;
    a=temp;
    cout<<a<<","<<b;
}

int main(){
    int a,b;
    char d;
    cout<<"Enter n:=";
    cin>>a>>d>>b;
    swap(a,b);
}