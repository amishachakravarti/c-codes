#include<iostream>
using namespace std;
int main(){
    int a=15;
    int*ptr=&a;
    int b=++(*ptr);
    // b=(*ptr)++ --> means *ptr  upgrade hoga fir  b ko pahle value jaega
    cout<<a<<" "<<b<<endl;


}