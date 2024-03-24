//  Full pyramid pattern
#include<stdio.h>
int main(){
    int  i,j,k,n;  // n = rows
    printf("enter no. of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){  //  loop for spaces
        printf(" ");
        }
        for(k=0;k<2*i+1;k++){  // loop for star*
            printf("*");
        }
        printf("\n");
    }

}