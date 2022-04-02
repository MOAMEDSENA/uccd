#include <stdio.h>
void main(){
	int x,i;
	printf("enter the num to display:");
	scanf("%d",&x);
	for (i=1;i<=x;i++){
		printf(" %d*%d=%d\n",i,x,i*x);
	}
}