#include<iostream>
using namespace std;
int hcf(int x, int y){
    int k,h;
    if(y<x){
    for(int i=1;i<=y;i++){
        if(x%i==0 && y%i==0){
            k=i;
        }
    }
    return k;
    }
   else { for(int i=1;i<=x;i++){
        if(x%i==0 && y%i==0){
            h=i;
        }
    }
    return h;
}
//but this is not efficient way to find hcf -more effective way is in next.......19
}
int main(){
    int a,b;
    char s;
    cout<<"Enter a and b := ";
    cin>>a>>s>>b;
    
    cout<<"The hcf of "<<a<<" and "<<b<<" is:= "<<hcf(a,b);

}
