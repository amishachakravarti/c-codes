// Null pointer --> imp. concept used in linked list
#include<iostream>
using namespace std;
int main(){
    int x;
    int*ptr1=&x;
    int*ptr2;//random address of any variable
    cout<<ptr1<<endl<<ptr2<<endl;
    int*pt=NULL;//reserved address
    cout<<pt<<endl;//0
    //ye reserved add. kabhi bhi kisi bhi varaible ko randomly nahi milega

// NOTE- int*pt=0 or int*pt='\0' or int*pt=NULL, all are same ,as Ascii value of '\0' (a NULL character ) is 0

//kisi bhi pointer ko NULL se initialise karne ka mtlb ham usme 0(reserved add. ) dal rahe hae 
cout<<&pt;

}
