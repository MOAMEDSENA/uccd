#include<stdio.h>
void main(){
	int x;
	printf("please enter the number:");
	scanf(" %d",&x);
	if ((x%2)==1){
		printf(" num is odd");
		
	}else{
		printf(" num is even");
	}
}