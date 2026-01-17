//WAP to convert Temperature Fahrenheit into Celsius. Formula: Celsius= (Fahrenheit-32)*5/9

#include<stdio.h>
int main()
{
    //declare variable
   float fahrenheit,celsius;
   //input fahrenheit into celsius 
    printf("enter fahrenheit:");
    scanf("%f",&fahrenheit);
    //calculate celsius 
    celsius=(fahrenheit-32)*5/9;
    //print the result
    printf("the celsius is %f\n",celsius);
    return 0;
}
