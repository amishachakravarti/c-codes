#include<iostream>
using namespace std;
int hcf(int x, int y){
    int hcf;
    for(int i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a,b;
    char s;
    cout<<"Enter a and b := ";
    cin>>a>>s>>b;
    
    cout<<"The hcf of "<<a<<" and "<<b<<" is:= "<<hcf(a,b);

}
