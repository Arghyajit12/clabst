// diamond pattern
  #include<stdio.h>
  int main(){
    int i,j,k,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
            printf(" ");
        }
        for(k=1;k<=(2*i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
     for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=1;k<=2*(n-i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
      return 0;
  }