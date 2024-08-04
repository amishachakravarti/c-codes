// ques-> Find first and last digit of number using pointer
#include<iostream>
using namespace std;
ans(int*p1,int*p2,int n){
    *p2=n%10;

    while(n>9){
        n=n/10;

    }
    *p1=n;
}


int main(){
    int n;
    cout<<"Enter n:= ";
    cin>>n;
    int fd , ld;
   int*p1=&fd,*p2=&ld;
   ans(p1,p2,n);
   cout<<fd<<" "<<ld;


}
