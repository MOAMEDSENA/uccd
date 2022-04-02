#include <stdio.h>
void main(){
	int a,b,c,d,e;
	printf("enter num1:");
	scanf(" %d",&a);
	printf("enter num2:");
	scanf(" %d",&b);
	printf("enter num3:");
	scanf(" %d",&c);
	printf("enter num4:");
	scanf(" %d",&d);
	printf("enter num5:");
	scanf(" %d",&e);
	
	int x;
	printf(" enter the value :");
	scanf(" %d",&x);
	if (x==a){
		printf(" elment number :1");
	}else if (x==b){
		printf(" elment number :2");
	}else if (x==c){
		printf(" elment number :3");
	}else if (x==d){
		printf(" elment number :4");
	}else if (x==e){
		printf(" elment number :5");
	}
	
}