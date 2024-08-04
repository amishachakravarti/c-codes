#include<iostream>
using namespace std;
int main(){
    int x=4;
    int*ptr =&x;
    cout<<*ptr<<endl; //4
    //yaha pe simply x ka value print hoga jisko ptr point karega


    ptr++;
    //ham pointer ke value ko upgrade kiye to +4bytes
    cout<<*ptr<<endl; //6422284
    //to pointer ab new address ko point karega jis address pe koe value store hae  nahi hae
    //ishlia waha randomly ek garbage value store hojaega aur ,print karne pe garbage 
    // value print hoga
    

    
}