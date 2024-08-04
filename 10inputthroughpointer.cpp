#include<iostream>
using namespace std;
int main(){
    int x,y;
    int*p1=&x;
    int*p2=&y;
    cout<<"Enter first and second no. := ";
    cin>>*p1>>*p2;
    // cout<<x+y;
    cout<<*p1+*p2<<endl;


    int m;
    int*p=&m;
    cout<<"Enter no.:= ";
    cin>>*p;
    cout<<m;
}