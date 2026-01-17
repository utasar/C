//.Write a program to find the greatest number between three numbers using function with arrguments and return type.

#include<stdio.h>
int greater_numbers(int a,int b, int c);
int main()
{
    int result=greater_numbers(9,10,7);
    printf("the greater number is:%d\n",result);
    return 0;
}

int greater_numbers(int a,int b, int c)
{
   if(a>b && a>c)
   {
   return a;
   }
   else if(b>a && b>c)
   {
    return b;
   }
   else
    {
        return c;
    }
   }
