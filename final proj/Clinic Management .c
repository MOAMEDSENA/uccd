#include <stdio.h>
#include <stdlib.h>


void main(){

int choice,i,pw,id, input,  pat_age, pat_id;
char name[100];
char gender[20];
int flag=0 ,Exit_flag=1;

while(Exit_flag){
    printf(" enter 1 for admin mode (or) enter 2 for user mode (or) enter 3 to exit \n");
    printf("your choice: ");
      scanf(" %d",&choice);

      if(choice==1){
        printf("\t\t\t***Admin Mode ***\n");
        printf("please enter your pasword\n");
          for(i=0;i<3;i++){
            scanf(" %d",&pw);
            if(pw==1234){
                printf("\t\t\t***Welcome***\n");
                flag=1;
                break;
            }else if (i<2){
            printf("try again:");
            }
          }if (flag==1){
          printf("if you want to add new patient record press 1\n");
          printf("if you want to edit new patient record press 2\n");
          printf("if you want to reserve a slot with the doctor press 3\n");
          printf("if you want to cancel reservation record press 4\n");
                 printf("your choice: ");
                 scanf(" %d",&input);

                 switch (input){
             case 1:
                printf(" please enter the patient's name :");
                scanf(" %c",&name[i]);

                printf("please enter the patient's age:");
                scanf(" %d",&pat_age);

                printf("please enter the patient's gender (male or famale):");
                scanf(" %c",&gender[i]);

                printf("please enter the patient's id :");
                scanf(" %d",& pat_id);
                Add_pat(name,pat_age,pat_id,gender);/* void add */
                break;
             case 2:
                printf("enter your ID:");
                scanf(" %d",&id);
                Edit_list(id);/* void edit */
                break;
             case 3:
                Time_Resrvation();/*void time */
                break;
             case 4:
                printf("enter your ID: ");
                scanf(" %d",&id);
                cancel_Res(id); /*void cancel*/
                break;
             default:
                printf("invali choice please try again");
                break;

                 }



          }
          else if(flag==0){
            printf("incorrect password for 3 consecutive times\n");
            Exit_flag=0;

          }
      }
      else if (choice==2){
        printf("\t\t\t *** User Mode ***\n");
        printf(" for patient record press 1\n");
        printf(" for today's reservation press 2\n");
        printf(" your choice: ");
        scanf(" %d",&choice);
        switch(choice){
        case 1:
            printf(" Enter your ID:");
        scanf(" %d",&id);
            printf("\t\t\t ***Patient Record***\n\n");
            print_list(id);  /*void print list*/
            break;

        case 2:
            printf(" \t\t\t***Today's Reservation***\n\n");
            print_Res();  /*void print_Res*/
            break;

        default:
            printf("invalid choice please try again \n");
            break;

        }

      }
      else if(choice==3){
        Exit_flag=0;
        printf(" Good Bye");

      }
      else
        printf(" Wrong entry\n");
}

}
