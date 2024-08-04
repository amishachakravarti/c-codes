#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. to be checked:= ";
    cin>>n;
    int i=2;
    int k=0;

    
                
      if(n>1){
            
        while(i<n){
            if(n%i==0) {cout<<n<<" is composite";
                 k=1;
                      break;
                     }
              i++;
                                  }
      if(k==0){
        cout<<n<<" is prime";
    } 
          
          }


  else { cout<<n<<" is neither prime nor composite";}         

    

    
}