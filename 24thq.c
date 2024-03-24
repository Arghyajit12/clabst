// reverse order
#include<stdio.h>
int main(){
  int n,s=0;
  printf("enter ur number ");
  scanf("%d",&n);
  do
  {
    s=n%10;
    printf("%d",s);
    n=n/10;
  } while (n>0);
  return 0;
  
}
