//fibonacci series using while loop
#include<stdio.h>
int main(){
    int i=1,j=0,n;
    printf("enter number");
    scanf("%d",&n);
    while(j<=n){
        printf("%d",j);
        i=i+j;
        j=i-j;
    }
    return 0;
}