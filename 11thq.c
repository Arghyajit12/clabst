//calculate age 
#include<stdio.h>
int main(){
    int currentyear,birthyear,age;
    printf("enter ur birthyear");
    scanf("%d",&birthyear);
    printf("enter current year");
    scanf("%d",&currentyear);
    age = currentyear - birthyear ;
    printf("your age is %d",age);
    return 0;
}