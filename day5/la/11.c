#include <stdio.h>

int main()
{
    int arr[10],i;
    for(i=0;i<=9;i++)
    {
        printf("please enter the number %d  : ",i);
                scanf("%d", &arr[i]);
    }
    printf("the value is reversed order \n");
    for(i=9;i>=0;i--)
    {
         printf("%d\n", arr[i]);
    }
    printf("\n");
}
