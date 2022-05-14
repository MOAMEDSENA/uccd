#include <stdio.h>

int main()
{
  int arr[10], i, n ,avg , sum=0;
  printf("please enter the number:");
  scanf("%d",&n);
  for (i=0 ;i< n; i++)
  {
      printf(" enter num %d:",i);
      scanf("%d",&arr[i]);
      sum = sum + arr[i];
  }
  avg = sum / n;
  printf("the sum is: %d\n ",sum);
  printf("the avg is : %d ",avg);

}