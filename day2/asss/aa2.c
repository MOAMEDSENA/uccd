#include <stdio.h>
void main(){
	int id ,pass;
	printf("please enter the id:");
	scanf(" %d",&id);
	printf(" please enter the pass");
	scanf(" %d",&pass);
	switch(pass){
		case 1234: printf(" hallo mohamed");break;
		switch(id){
			case 1111:printf(" hallo mohamed");break;
			
		}default :printf(" wrong pass");break;
	}
}