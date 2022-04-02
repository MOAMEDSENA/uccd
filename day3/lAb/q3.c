#include<stdio.h>
void main(){
	int i ,num ,sum=0;
	float avg;
	printf("enter the num\n");
	for( i=1;i<11;i++){
		printf("number_%d\n",i);
		scanf(" %d",&num);
		sum+=num;
	}
	avg= sum/10.0;
	printf(" sum is: %d\n",sum);
	printf(" avg is :%f\n",avg);
}