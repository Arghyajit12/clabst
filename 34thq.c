// hollow full pyramid pattern
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            if(k==0||k==2*i){
             printf("*");           
        } else if(i==n-1){
            printf("*");
        }else{
            printf(" ");
        }
     }
        printf("\n");
    }
    return 0;
}
