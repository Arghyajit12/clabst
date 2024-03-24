//solving quadratic equation
 #include<stdio.h>
 #include<math.h>
 int main(){
    float a,b,c,d,r1,r2;
    printf("enter value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b - 4*a*c;
    if (d==0)
  {  printf("roots are real and equal\n");
    r1 = -b/(2*a);
    r2 = -b/(2*a);
    printf("root 1 is %.2f and root 2 is %.2f",r1,r2);
  }
    else if (d>0)
   { printf("roots are real and different\n");
    r1 = (-b+sqrt(d))/(2*a);
    r2 = (-b-sqrt(d))/(2*a);
    printf("root 1 is %.2f and root 2 is %.2f",r1,r2);
   }
    else 
    printf("roots are imaginary\n");
    return 0;


 }