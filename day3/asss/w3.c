#include<stdio.h>
void main(){
	int i ,space ,rows ,x=0;

	printf(" enter the hight of rows:");
	scanf(" %d",&rows);

	for(i=1;i<=rows;++i){
		x=0;
		for(space=1;space<=rows-i;++space){
			printf(" ");

		}while(x!=2*i-1)
		{
			printf("*");
			++x;
		}printf("\n");
	}
}
