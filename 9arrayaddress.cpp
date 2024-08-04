// memory allocation in arrays is-> continuous memory allocation
#include<iostream>
using namespace std;
int main(){
    int arr[5] ={1,5,6,4,5};
   cout<<&arr[0]<<endl;
   cout<<&arr[1]<<endl;
   cout<<&arr[2]<<endl;
   cout<<&arr[3]<<endl;
   cout<<&arr[4]<<endl;
   cout<<&arr<<endl;// array ke 1st index ka add. hi us array ka add. hota hae 
   cout<<arr;//another way to print add. of array
    
    //int data type ke 1st byte ka add. hi us pure int data type ka add. hota hae 
    // same for all data type

    // cout<<&arr;
    //              ]-- both print (add. of array) or (add. of first element of array) or  (we can say that add. of first byte of first element of array)
    // cout<<arr; 
    
    
}