//  using time.h module to find the execution time of a function
#include <stdio.h>
#include <time.h>
int main()
{
  time_t starttime,endtime;
  double diff;
  printf("enter start time:");
  scanf("%ld",&starttime);
  printf("enter end time:");
  scanf("%ld",&endtime);
  diff = difftime(endtime, starttime);
  printf("Time difference is : %.2lf minutes\n", diff);
  return 0;

}