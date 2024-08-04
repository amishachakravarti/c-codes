// Passing array to function
#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
    return;
}
void change(int b[]){
    b[1]=45555;
}
int main(){
    int arr[]={1,4,2,7,46};
    // accessing elements of array in another function
    // updation--> is it pass by value / reference ?
    display(arr);
    change(arr);
    display(arr);
}