// (*ptr = *ptr +1) means --> x=x+1
    //but *ptr++; --> is worng 
    // it is always advised to write above as (*ptr)++;
    //because pahle pointer apna kaam karle ,variable ki value le aae fir modify ya upgrage kare value ko
    
#include<iostream>
using namespace std;
int main(){
    int x=3;
    int *j=&x;
    cout<<*j<<endl; //3
    (*j)++;
    cout<<*j<<endl;//4
    
}
