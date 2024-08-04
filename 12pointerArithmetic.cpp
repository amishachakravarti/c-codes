//Pointer Arithmetic:=
//    increment and Decrement

//hexadecimal includes--> 0    1    2    3    4   5    6    7    8    9   a      b    c    d     e     f
//                                                                        |      |    |    |     |     |
//                                                                       (10)   (11) (12)  (13)  (14)   (15)
#include<iostream>
using namespace std;
int main(){
    int a=3;
    int*ptr=&a;
    cout<<ptr<<endl; // output --> 0x61ff08 (--> there no.s are in hexadecimal type)
    ptr++;//(ptr=ptr+1)
    cout<<ptr<<endl; // output --> 0x61ff0c (-->     ||         ||              ||      )

    //here we store 3 in 'a' named variable which aquires 4 bytes storage in memory as it is int data type
    //pointer named 'ptr' points and stores address of 'a'
    //so if we upgrade pointer by +1 it points the next address after this int a dabba 
    //so on updradation by +1 ,the  value(address) store in this pointer get incresed by +4;
    //here 08 to 0c (i.e.  0x61ff08  to  0x61ff0c )
    
    //so here ptr++ entirely depends on data type 



    // here we studied the dependence of addition and subtraction to pointers on the data type
    //int --> 4 bytes se aage
    //bool/char--> 1 byte   se aage
}
