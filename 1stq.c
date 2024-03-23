// area of triangle
#include<stdio.h>
int main(){
    float base,height,area;
    printf("enter base of triangle");
    scanf("%f", &base);
    printf("enter height of triangle");
    scanf("%f", &height);
    area = (1.0/2.0)*base*height;
    printf("area of triangle is : %f",area);
    return 0;

}