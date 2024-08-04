#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enrter a:= ";
   cin>>a;
    int*x=&a;// int* --> int ka address store karta hae 
    //VVIP -> *x=7;//a is changed 
   int**y=&x; //int** -> int* ka address store karta hae
   int***z=&y;//int*** -> int** ka address store karta hae
   cout<<&a<<endl;
   cout<<x<<endl;
   cout<<y<<endl;
   cout<<z<<endl;

 printf("now belows are values of a:= \n");
 cout<<a<<endl;
 cout<<*x<<endl;
 cout<<**y<<endl;
 cout<<***z<<endl;
 

   return 0;
}