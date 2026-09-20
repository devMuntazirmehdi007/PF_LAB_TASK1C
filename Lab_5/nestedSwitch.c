#include <stdio.h>
int main()
{
   int deparment;
   printf("Select your deparment \n'1' for CS \n'2' for AI \n'3' for SE \n" );
   scanf("%d",&deparment);
   int section;
       printf("Select you section \nSection 1=Section A  \nSection 2=Section B \n Section 3=Section C\n");
       scanf(" %d",&section);

   switch(deparment){
    case 1:
      
       
       switch(section){
        case 1:
           printf("Your deparment is CS and section is A\n");
           printf("Your break day is friday");
         break;
        case 2:
           printf("Your deparment is CS and section is B\n");
           printf("Your break day is Monday"); 
         break;
        case 3:
           printf("Your deparment is CS and section is C\n");
           printf("Your break day is Wednesday");   
         break;
           default:
           printf("Invalid section");
       };
     break;

    case 2: 
       switch(section){
        case 1:
           printf("Your deparment is AI and section is A\n");
           printf("Your break day is friday");
         break;
        case 2:
           printf("Your deparment is AI and section is B\n");
           printf("Your break day is Monday"); 
         break;
        case 3:
           printf("Your deparment is AI and section is C\n");
           printf("Your break day is Wednesday");   
         break;
           default:
           printf("Invalid section");
        break;
       };
     break;

    case 3:

      switch(section){
        case 1:
           printf("Your deparment is SE and section is A\n");
           printf("Your break day is friday");
         break;
        case 2:
           printf("Your deparment is SE and section is B\n");
           printf("Your break day is Monday"); 
        break;
        case 3:
           printf("Your deparment is SE and section is C\n");
           printf("Your break day is Wednesday");   
        break;
           default:
           printf("Invalid section");
       }; 
     break;
      default:
      printf("Invalid department");
   } 
}