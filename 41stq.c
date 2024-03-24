// spy number or not
#include<stdio.h>
int main(){
    int n,r,p=1,s=0;
    printf("enter number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
     if(s==p)
    printf("given number is spy number");
    else
    printf("given number is not spy number");
    return 0;

}