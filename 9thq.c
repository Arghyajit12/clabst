// celsius to fahrenheit and vice versa
#include<stdio.h>
int main(){
    float a,b, celsius,fahrenheit;
    int n ;
    printf("enter ur choice");
    scanf("%d",&n);
    switch(n){
        case 1 :
        printf("enter the temp in fahrenheit");
        scanf("%f",&a);
        celsius = 5 * (a-32)/ 9;
        printf("celsius temperature is :%.3f",celsius);
        break;
        case 2 :
        printf("enter the temp in celsius");
        scanf("%f",&b);
        fahrenheit = ((9*b)/5) +32 ;
        printf("fahrenheit temperature is %.3f",fahrenheit);
        break;
        default:
        printf("invalid input");
        break;
    }
    return 0;
}