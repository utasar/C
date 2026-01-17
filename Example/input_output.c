#include<stdio.h>
int main()
{
    int num;
    /*
    formatted input function that reads an integer from the standard input 
    and stores it in the memory location specified by the address of num.
    &num is the address of the variable num.
    */
   printf("enter a number:");
   scanf("%d",&num);
   printf("the entered number is %d\n",num); 
    return 0;
}
