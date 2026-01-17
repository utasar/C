#include<stdio.h>
int main()
{
    //taking input from user
    //5 steps
    //1.variable declaration
    //2.display a message for entering value of variable
    //3.input from the user using scanf()
    //4.calculate (logic)(area,convert)
    //5.display result
    //1.variable declare
    int age;
    //2.display a message to the user,asking them to enter a value for the age.
    printf("enter your age:");
    //3.input from the user using scanf()
    //scanf("format specifier(%d,%f,%c"),&variable_name)
    scanf("%d",&age);   //dont use \n in scanf(%d\n",&age)
    printf("your age is %d\n",age);
    return 0;
}
