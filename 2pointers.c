#include<stdio.h>
int main(){
    int a=5;
    int*x=&a;//int* , x named variable me 'a' ka address store kar raha hae
    printf("%p\n",x);//yaha a ka address print hoga 
    printf("%p\n",&x);//yaha x ka address print hoga
    printf("%d\n", *x);//means x ke andar jis bhi(means yaha pe 'a' ka) variable ka address store hae,us variable ko point karo aur uska value print karo 
    return 0;
}

//int*,char*--> data types hae just like int ,char, float, double ....etc