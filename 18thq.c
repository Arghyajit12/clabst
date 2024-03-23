//prime number or not 
#include<stdio.h>
int main(){
    int n,i ;
    printf("enter number");
    scanf("%d",&n);
    int a =0;
    for(i=2;i<=n-1;i++)
    if(n%i==0){
     a=1;
     break;
    }
    if (n==1)
    printf("1 is neither prime nor composite");
      else if (a==0)
    printf("given number is prime");
    else
    printf("given number is composite");
    return 0;
}
 