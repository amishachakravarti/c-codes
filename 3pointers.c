#include<stdio.h>
int main(){
    int a=25;
    int*x;
    x=&a;
    printf("%p\n",&a);
    printf("%p",x);//ye dono printf 'a' ka address print kar rahe hae 
    return 0;
}