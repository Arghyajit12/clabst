// area and perimeter of rectangle
#include<stdio.h>
int main(){
    float length,width,perimeter,area;
    printf("enter the length of rectangle:");
    scanf("%f",&length);
    printf("enter width of rectangle:");
    scanf("%f",&width);
    area = length * width;
    perimeter = 2 *(length+width);
    printf("area is %.2f",area);
    printf("\nperimeter is %.2f",perimeter);
    return 0;
}