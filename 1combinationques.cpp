#include<iostream>
using namespace std;
int fact(int j){
          int f=1,i=1;
          while(i<=j){
            f=f*i;
            i++;
          }
    return(f);

}

int main(){
    int n,r;
    char ch;//5,3 -> ish formate me input lene ke liye,
    cout<<"Enter value of n and r:= ";
    cin>>n>>ch>>r;
    cout<<"The combination of"<<n<<","<<r<<"is :=";
    cout<<fact(n)/(fact(r)*fact(n-r));


}