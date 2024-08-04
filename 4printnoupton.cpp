#include<iostream>
using namespace std;
void print_1_to_n(int k){
    for(int i=1;i<=k;i++){
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the no:=";
    cin>>n;
    print_1_to_n(n);

}