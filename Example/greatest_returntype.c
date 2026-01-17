//.Write a program to find the greatest number between two numbers using function with arrguments and return type.

#include<stdio.h>
int greater_numbers(int a,int b);
int main()
{
    int result=greater_numbers(9,6);
    printf("the greater number is:%d\n",result);
    return 0;
}

int greater_numbers(int a,int b)
{
   if(a>b)
   {
   return a;
   }
   else
   {
    return b;
   }
}
