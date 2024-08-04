//ques-> Given an array of marks of students ,if the marks of any student is less thsn 35 print its roll number 
//.[roll number here refers to the index of the array .]
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:= ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the marks of roll "<<i <<" student := ";
        cin>>arr[i];

    }
    cout<<"The roll no. of those students who scored less than 35 marks are as follows :="<<endl;

    for(int i=0;i<n;i++){
        if(arr[i]<35) cout<<i<<" ";
    }
    
}