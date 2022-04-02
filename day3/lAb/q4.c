#include<stdio.h>
void main(){
	int x;
	printf(" enter the answer 3*4=");
	scanf(" %d",&x);
	while(x!=12){
		printf("try again:");
		scanf(" %d",&x);
	}
	printf(" thank you");
}