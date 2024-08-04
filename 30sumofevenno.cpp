#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number N:= ";
    cin>>N;
    int i=0;
    int sum=0;
    while(i<=N){ 
        if(i%2==0){
           sum=sum+i;
           
        }
        i++;

    }
    cout<<"sum of all even numbers from 1 to N:= "<<sum;
}
