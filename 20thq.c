//sum of all natural numbers from 1 to n
#include<stdio.h>
int main(){
    int n ,i,s=0;
    printf("enter number");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
     s=s+i;
     printf("%d",s);
     return 0;
}