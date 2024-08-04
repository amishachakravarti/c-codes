// Write sum of two nos using pointer 
#include<iostream>
using namespace std;
int main(){
    int a=4,b=5;
    int*x=&a;
    int*y=&b;
    cout<<*x + *y;
}