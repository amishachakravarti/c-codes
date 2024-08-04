//Default values of Arguments

#include<iostream>
using namespace std;

void fun(int x=3,int y,char d)//ya to sabhi ko initialize kardo ya kisi ko yaha initialise mat karo direct main function se value pass karao
{
    cout<<x<<" "<<y<<" "<<d;
}


int main(){
    fun(4,6,'r');

    
}