//factorial of a number
#include<stdio.h>
int main(){
    int i,f=1,n;
    printf("enter number:");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    f=f*i;
     printf("%d",f);
    return 0;
}