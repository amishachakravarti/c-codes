#include<iostream>
using namespace std;
int main(){
    int S,E,W,C1,C2,C3;
    cout<<"Enter Start Fahrenheit value(S):=";
    cin>>S;
    cout<<"Enter Step Size(W):=";
    cin>>W;
    cout<<"Enter End Fahrenheit value(E):=";
    cin>>E;
    C1=((S-32)*5)/9;
    C2=((E-32)*5)/9;
    C3=((W-32)*5)/9;
    cout<<S<<"="<<C1<<endl;
    cout<<E<<"="<<C2<<endl;
    cout<<W<<"="<<C3<<endl;

}