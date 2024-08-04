#include<iostream>
using namespace std;
int main(){
 int n;//size value of array4
 cout<<"Enter the value of n:= ";
 cin>>n;
int arr[n];
 //int a=1;
for(int i=0;i<n;i++) {

    cout<<"Enter value in box no."<<i+1<<" := ";

   cin>>arr[i];
   // a++;
    
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
