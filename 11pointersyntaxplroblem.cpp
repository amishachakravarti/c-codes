//pointer syntax problem

// int x; int y;        
//   or         --> both are same and correct
//int x,y;
 

//int x=5; int y=6;
//   or          --> both are  same and correct
//int x=5,y=6;

 
//int*p1=&x; int*p2=&y; --> correct
//     or
//int*p1=&x,p2=&y;   --> wrong
//Instead  int*p1=&x,*p2=&y --> is correct
//Also  int*p1 =&x , p2=y --> is correct,where p2 in not a pointer variable it is just a normal int data type variable

#include<iostream>
using namespace std;
int main(){
    // int x,y;
    // int*p1=&x,p2=y;
    // cout<<"Enter two no.s :=";
    // cin>>*p1>>p2;
    // cout<<*p1+p2;


    int x,y;
    int*p1=&x,*p2=&y;
    cout<<"Enter two no.s :=";
    cin>>*p1>>*p2;
    cout<<*p1 +*p2;

}


