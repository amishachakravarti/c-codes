// ques-> Find first and last digit of number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. := ";
    cin>>n;
    int last_digit = n%10;
    while(n>9){
        n=n/10;

    }
    cout<<n<<" "<<last_digit;
}