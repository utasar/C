/* write a C program to find sum of numbers from 1 to 100 without using loop.*/

#include<stdio.h>
int main()
{
    int n=100;
    int a=1;    //first term 
    int b=100;  //second term
    int sum;

    //using the arithmetic series formula
    sum=n/2*(a+b);
    printf("The sum of numbers from 1 to %d is : %d\n ",n,sum);
    return 0;
}
