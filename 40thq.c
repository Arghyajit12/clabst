// Neon  number or not
#include<stdio.h>
int main(){
    int n,r,sq,s=0;
       printf("enter number:");
       scanf("%d",&n);
       sq = n*n;
       while(sq!=0){
        r=sq%10;
        s = s+r;
        sq=sq/10;
       }
       if(s==n)
    printf("given number is neon number");
    else
    printf("given number is not neon number");
    return 0;

}
