#include<stdio.h>
void main(){
	int x,y,z;
	printf("num 1:");
	scanf(" %d",&x);
	 
	 printf("num 2:");
	scanf(" %d",&y);
	
	printf("num 3:");
	scanf(" %d",&z);
	
	int max;
	if((x>y)&&(x>z)){
		max=x;
	}else if ((y>x)&&(y>z)){
		max=y;
	}else if ((z>x)&&(z>x)){
		max=z;
	}printf("max :%d",max);
	
	
}