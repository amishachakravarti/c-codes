#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a:= ";
    cin>>a;
    int*ptr =&a;
    int**p=&ptr;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*p<<endl;//yaha pe ek * dalne se ptr ke ander jo value hae wahi tak print hoga 
    //agar do star(**) rahta to ptr ke ander jo add. store hae us add pe jo value store hoga usko print karega
    //  so jitna star utna ander tak pointer point karega 
    // so in this way we can also print add. of variable  by using  double pointer 

    // * --> add. ke under ka value
    // ** __> add. ke under store add. ka value
    // double pointer se na keval value ko assess kar sakte hae balki pichle pointer me store add. ko bhi assess kar sakte hae 
}