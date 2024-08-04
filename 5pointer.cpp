#include<iostream>
using namespace std;
int main(){
    float x=2.4;  
    float*d =&x;
    cout<<d<<endl;
    //float* data type pointer  me float data type variable ka hi address store hoga.

    int a=3;
    int*b=&a;
    cout<<b<<endl;
    //similarly for other data type --> int* data type pointer  me int data type variable ka hi address store hoga.

    char ch='s';
    char*k=&ch;
    cout<<k<<endl;
     //char* data type pointer  me char data type variable ka hi address store hoga.

   bool m=true;
   bool*l= &m;
   cout<<l;
    //bool* data type pointer  me bool data type variable ka hi address store hoga. 

    
}