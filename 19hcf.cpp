#include<iostream>
using namespace std;
int hcf(int x, int y){
    int hcf;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            hcf=i;
        }
    }
    return hcf;
    //futher more optimised code is in next file......
}
int main(){
    int a,b;
    char s;
    cout<<"Enter a and b := ";
    cin>>a>>s>>b;
    
    cout<<"The hcf of "<<a<<" and "<<b<<" is:= "<<hcf(a,b);

}
