#include<iostream>
using namespace std;
int multiply(int h,int g){
    return g*h;
}
int main(){
    int a,b;
    cout<<"Enter value of a and b:=";
    cin>>a>>b;
    cout<<multiply(a,b);

}