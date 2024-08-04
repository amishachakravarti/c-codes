#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character:=";
    cin>>ch;
    if(ch>='A' && ch<='Z') cout<<"1,character is upeercase alfabet";
    else if(ch>='a' && ch<='z') cout<<"0, charater is a lower case alphabet";
    else cout<<"-1,character is not an aphabet";

}