//Write a program to take input as dollar and convert it into nepalese currency

#include<stdio.h>
int main()
{
    //1.declare variables
float dollar,nepalesecurrency;
//2.take input from the user
printf("enter the currency value of dollar:");
scanf("%f",&dollar);
//3.calculate the currency value
nepalesecurrency=dollar*133;
//print the result
printf("nepalese currrency value is %f\n",nepalesecurrency);
return 0;
}
