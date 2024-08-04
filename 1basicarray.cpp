// Data Structure-> Storage to store data
// Array is a type of data structure
// or we can say that it is a list or collection of similar data

#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,1};//5 dabbe create ho gae
    //uper me 5 size of array 
    arr[4]=100;//{2,4,6,8,100}
    //aur yaha pe 4 indix of array hae
    arr[1]=1;//{2,1,6,100}
    cout<<arr[3]<<endl;
    float g[3]={3.45,5.44,23.4};
   g[2]=45.3;
 cout<<g[2]<<endl;
   char w[4]={'@','$','w','a'};
   
    w[1]='t';
    cout<<w[2]<<endl;
    cout<<w[1];

   

}