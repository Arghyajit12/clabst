// armstrong number or not
#include<stdio.h>
int main(){
    int n,r,x,s=0;
    printf("enter ur number");
    scanf("%d",&n);
    x=n;
    do
    {
      r = x%10;
      s=s+r*r*r;
      x=x/10;
    } while (x>0);
    if(s==n)
     printf("it is armstrong number");
     else
     printf("it is not armstrong");
     return 0;        
    
    
}