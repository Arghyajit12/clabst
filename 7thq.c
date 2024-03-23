//arithmetic operations on user input
#include<stdio.h>
int main(){
    int a,b,n,add,sub,multi,div;
    printf("enter number");
    scanf("%d%d",&a,&b);
    printf("enter ur choice");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        add= a+b;
        printf("%d",add);
        break;
        case 2 :
        sub =a-b;
        printf("%d",sub);
        break;
        case 3 :
        multi =a*b;
        printf("%d",multi);
        break;
        case 4 :
        div=a/b;
        printf("%d",div);
        break;
        default:
        printf("invalid input");
        break;


    }
    return 0;
}
