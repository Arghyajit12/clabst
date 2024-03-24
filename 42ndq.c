// perfect number or not
#include<stdio.h>
int main(){
    int i,n,r,s=0;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=(n-i);i++)
    {
        r=n%i;
        if(r==0)
        {
            s=s+i;
        }
       
    }
     if(s==n)
    printf("given number is perfect number");
    else
    printf("given number is not perfect number");
    return 0;

}
