// strong number or not
#include<stdio.h>
int main(){
    int n,i,f,r,sum=0,x;
    printf("enter ur number");
    scanf("%d",&n);
    x=n;
    while(n)
    {
        i=f=1;
        r=n%10;

        while(i<=r)
        {
            f=f*i;
            i++;
        }
        sum = sum+f;
        n=n/10;
}
if(sum==x)
printf("it is strong number");
else
 printf("it is not strong");

    return 0;
}