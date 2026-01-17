//c program 1.that takes two numbers as input from the user 2. and takes input as addition,subtraction,multiplication,division(+,-,*,/) 
//based on user's choice(input)(???) using if else or switch(???)

#include<stdio.h>
int main()
{
    char operations;
    float a=10;
    float b=20;
    printf("enter the operations(+,-,*,/):");
scanf("%c",&operations);
switch(operations)
{
    case '+':
    printf("addition is %f\n", a+b);
    break;

    case '-':
    printf("subtraction is %f\n",a-b);
    break;

    case '*':
    printf("multiplication is %f\n",a*b);
    break;

    case '/':
    printf("division is %f\n",a/b);
    break;
    
    default:
    printf("user's choice\n");
    break;
}
return 0;
}
