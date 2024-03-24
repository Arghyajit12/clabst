// sum of its digits
#include<stdio.h>
int main(){
    int n,x,sum=0;
    printf("enter ur number");
    scanf("%d",&n);
    do
    {
       x=n%10;
       sum=sum+x;
       n=n/10;
    } while (n>0);
    printf("%d",sum);
    return 0;
    
}