#include<stdio.h>
#include <conio.h>
void main ()
{
    int a, count=0,i;
    printf ("enter a number to check if it is prime or not : \n");
    scanf ("%d",&a);
    if (a>1)
    {
      for (i = 1; i<=a ; i++)
      {

       if (a%i == 0)
       {
           count = count + 1 ;
       }

    }
     if (count == 2  )
     {
         printf ("%d is a prime number :",a);
     }
     else
     {
         printf ("%d is a composite number :",a);
     }

    }

    else
    {
        printf ("the number is either 0 or 1:)");
    }
}
