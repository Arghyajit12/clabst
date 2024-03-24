// hollow inverted full pyramid pattern 
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=0;k<2*(n-i)-1;k++){
            if(k==0||k==2*(n-i)-2||i==0){
             printf("*");           
        }else{
            printf(" ");
        }
     }
        printf("\n");
    }
    return 0;
}
