//write a program to calculate the factorial of a number using do while.

   #include<stdio.h>
   int main()
   {
      int i=1,num,fact=5;
      printf("enter any number:");
      scanf("%d",&num);
      do
      {
       fact=fact*i;
       i=i+1;
      } 
      while (i<=num);
      printf("factorial of given number is %d\n",fact);
      return 0;
   }
