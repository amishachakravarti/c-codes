#include<iostream>
using namespace std;
bool isprime(int j){
    int i=2;
    while(i<j){
       if(j%i==0){
        return false;//Return hit once to calling function ,ek baar koe value return ho gaya uske baad aage ka koe bhi value return nahi hoga
        break;
       }
        i++;
        
    }
    return true;
}
int main(){
    
    int n;
    cout<<"Enter no. to be checked:=";
    cin>>n;
    // bool result=isprime(n);
    // cout<<result;

    if(isprime(n)){
       cout<<n<<" is a prime no."<<endl;}
    else{ cout<<n<<" is not a prime no."<<endl;}
        
    }

    
