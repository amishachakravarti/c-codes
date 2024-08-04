#include<stdio.h>
void main(){
    int a=25;
    int*x=&a;
    *x=6;//mtlb x variable me jis varaible('a') ka address store hae us variable ke value ko point karo aur value upgrade karo
    printf("%d\n",a);
    
}//pointer ke help se kisi dusre variable ka jiska sirf address pta hae uska value change kar sakte hae  