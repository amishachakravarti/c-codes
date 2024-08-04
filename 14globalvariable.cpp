//scope of variable -global variable and local variable
#include<iostream>
using namespace std;
int a=300;//global variable
int fun(){
    a+=539;
    cout<<a<<endl;
}
int main(){
    int n=5;//local variable
    cout<<n<<endl;
    cout<<a<<endl;
    fun();
}