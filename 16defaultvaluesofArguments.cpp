//Default values of Arguments

#include<iostream>
using namespace std;

int fun(int x=7,int y=8,char d='r')//here 7,8,r are default values of x,y,r respectively
{
    cout<<x<<" "<<y<<" "<<d;
}


int main(){
    fun();
    fun(4);  //<--Try this and below and self conclude result
    fun(4,6);
     fun(3.5);
}