#include<stdio.h>
void main(){
	int x;
	printf("please enter num grade:");
	scanf(" %d",&x);
	if (x<50){
		printf("filed");
		
	}else if ((x>=50)&&(x<65)){
		printf(" normal");
		
	}else if ((x>65)&&(x<75)){
		printf(" good");
		
	}else if ((x>75)&&(x<85)){
		printf(" very good");
		
	}else if ((x>85)&&(x<=100)){
		printf(" excellent");
		
	}
}