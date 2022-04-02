#include <stdio.h>
void main(){
	int id ,pass;
	printf("please enter the id:");
	scanf(" %d",&id);
	printf(" please enter the pass");
	scanf(" %d",&pass);
	switch(id){
		case 1234:printf(" hallo mohamed\n");break;
		
		if( pass==1111){
			printf(" hallo mohamed");
		}else if (pass!=1111){
		printf(" wrong pass\n");
		}default : printf(" wrong pass");break;
	}
	printf(" thank you");
	
	
}