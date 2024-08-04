#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:= ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the value in box no. %d := ",i+1);
        scanf("%d",&arr[i]);

    }
    printf("The reverse printing of differnt no. are as follows :\n");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);

    }
    return 0;
}