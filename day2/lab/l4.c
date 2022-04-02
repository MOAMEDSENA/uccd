#include<stdio.h>
void main(){
	int id;
	printf(" please enter id:");
	scanf(" %d",&id);
	switch(id){
		case 1234:printf(" hallo mhamed\n");break;
		case 5678:printf(" hallo sena\n"); break;
		case 1111:printf(" hallo ahmed\n");break;
		default :printf(" wrong id");
	}
	
}