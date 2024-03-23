// leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("enter ur year");
    scanf("%d",&year);
    if (((year%4==0)&&(year%100!=0))||(year%400==0))
    printf("leap year");
    else 
    printf("regular year");
    return 0;
} 