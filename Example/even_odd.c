//Write a program that calculate whether the number is even or odd using function.

#include<stdio.h>
void CheckEvenOdd (int num );

int main()
{
    int number;

    //Input number from user
    printf("Enter an number:");
   scanf("%d",&number);

   //call the function
   CheckEvenOdd (number);
        return 0;
    }

//function definition 
//check if a number is even or not 
void CheckEvenOdd(int num)
{ 
    if (num %2 == 0)
    {
        printf("%d is even.\n",num);
    }
    else
    {
        printf("%d is odd.\n",num);
    }
}
