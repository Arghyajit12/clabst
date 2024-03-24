// palindrome or not
#include<stdio.h>
int main(){
    int n,reminder,original,reversed=0;
    printf("enter ur number");
    scanf("%d",&n);
    original=n;
    do
    { reminder = n%10;
     reversed = reversed *10+reminder;
     n=n/10;

    }while(n!=0);
    if(original==reversed)
    printf("it is palindrome");
    else
    printf("it is not palindrome");
    return 0;
    
}
