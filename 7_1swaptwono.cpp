//Pass by reference (using alias )
// Alias names using --> & operator

#include<iostream>
using namespace std;
  //sasta nasa tarika of swaping two no.s(non technical way --->bas ho jata hae )
void swap(int &a,int &b)//pass by reference 
{
    int temp=a;
    a=b;
    b=temp;

}
int main(){
    int a,b;
    cout<<"Enter a and b :=";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;

}