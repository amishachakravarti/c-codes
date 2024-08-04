#include<iostream>
using namespace std;
int main(){
      // bool data type needs-->1 byte
    bool done = true;
    bool*ptr =&done; //0x61ff07
    cout<<ptr<<endl; //0x61ff08
    ptr++;
    cout<<ptr<<endl;

    //hexadecimal includes--> 0    1    2    3    4   5    6    7    8    9   a      b    c    d     e     f

    char f='s';
    char*k=&f;
    cout<<k<<endl;
    k++;
    cout<<k<<endl;

}