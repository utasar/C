#include<stdio.h>
int main()
{
    //1.Declare Variable
   int score,attendance;
   /*2.1 Display message to user for students score.*/
   printf ("Enter the student's score in percentage:");
   /*2.2 Get user input of student's score in percentage using scanf.*/
   scanf("%d",&score);
   /*3.1 Display message to user for number of classes attended.*/
   printf("enter the number of classes attended in percentage: ");
   /*3.2 Get user input of student's attendance in percentage using scanf.*/
   scanf("%d",&attendance);
   /*check if the student passes based on score and attendance*/
   //First if:check if the score is 60 or above
   if (score>=60)
   {
  //First if(True(1))
  //Nested if(second if)

  if(attendance>=75)
  {
    //Second if(true(1)):Check if attendance is 75% or above
    printf("congratulations! The student passed with a good attendance.\n");
  }
  else 
  {
    //second if (false(0)):Handle if attendance is less than 75%  
    printf("The student passed but needs to improve attendance.\n");
    }
    //First if -else part
   }
   //else
   {
    printf("sorry,the student did not pass.\n");
   }
   return 0;
}
