// ascending and descending order
#include<stdio.h>
int main(){
    int i,n;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d",i);
    for(i=n;i>=1;i--)
    printf("%d",i);
    return 0;
}