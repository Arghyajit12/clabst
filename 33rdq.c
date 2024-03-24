// inverted left half pyramid pattern
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<2*i;j++){
            printf(" ");
        }
        for(k=0;k<n-i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}