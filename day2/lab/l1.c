#include<stdio.h>
void main(){
	int h ,salary;
	printf(" please enter working houres:");
	scanf(" %d",&h);
	salary=50* h;
	if(h<40)
	{
		salary=(salary *90)/100;
	}
	printf("you salary is: %d",salary);
}