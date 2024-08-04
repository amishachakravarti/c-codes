// jugar to find length of array--> by using sizeof operator
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,7,6,8,2,3,5,9,7,8,4,3,2,5,7,45,65,6,7,3,2,4,5,4,3,3,34};
    int n=sizeof(arr)/sizeof(arr[4]);//here in place of 4 we can also put other no.s like 0,1,2,3 etc...
    cout<<n;


}