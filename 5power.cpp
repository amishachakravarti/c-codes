#include<iostream>
using namespace std;
int power(int g,int y){
    int p=1;
    for(int i=1;i<=y;i++){
        p=p*g;

    }
    return p;
}

int main(){
    int a,b;
    cout<<"Enter a and b:=";
    cin>>a>>b;
    cout<<power(a,b);

}