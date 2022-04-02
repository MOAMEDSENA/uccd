#include <stdio.h>


void main(){

  int id , pass , i=1;
  printf("please enter the Id: ");
  scanf("%d",&id);
  switch(id)
  {
      case 1234:
        printf("please enter the pass: ");
        for (i=1;i<=3;i++)
        {   scanf("%d",&pass);
            if (pass==7788){
            printf("hello Ahmed");
            break;}
            if(i>2){i++;break;}
            printf("the pass is wrong , try again ");}
            if (i>3)
                printf(" no more tries");
             break;

      case 5678:
         printf("please enter the pass: ");
        for (i=1;i<=3;i++)
        {   scanf("%d",&pass);
            if (pass==5566){
            printf("hello Amr");
            break;}
            if(i>2){i++;break;}
            printf("the pass is wrong , try again ");}
            if (i>3)
                printf(" no more tries");
             break;

       case 9870:
        printf("please enter the pass: ");
        for (i=1;i<=3;i++)
        {   scanf("%d",&pass);
            if (pass==1122){
            printf("hello Wael");
            break;}
            if(i>2){i++; break;}
            printf("the pass is wrong , try again ");}
            if (i>3)
                printf(" no more tries");
             break;

       default: printf("You're not Register");
  }
}
