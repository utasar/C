//Write a program that takes input a character ('M' for male or 'F' for female)and then prints out the corresponding gender

#include<stdio.h>
int main()
{
   char gender;
   printf("enter the gender:");
   scanf("%c",&gender);
   switch(gender)
   {
    case 'm':
    case 'M':
    printf("Male\n");
    break;
case 'f':
case 'F':
    printf("Female\n");
    break;
    
    default:
    printf("corresponding  gender\n");
   break;
   }
   return 0;

}
