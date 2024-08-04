
//Pass by reference  (pass by value in function(23file no.))
#include<stdio.h>
void swap(int*x,int*y){
    int temp=*x;//temp=a
    *x=*y;//a=b
    *y=temp;//*y=temp -->b=a;
}
void main(){
int a,b;
printf("Enter the value of a:= ");
scanf("%d",&a);
printf("Enter the value of b:= ");
scanf("%d",&b);
  
 
int*d=&a;int*f=&b;
// swap(&a,&b);
swap(d,f);
printf("%d,%d",a,b);



}
