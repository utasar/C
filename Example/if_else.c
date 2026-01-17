
//3. Write a program to check if a person's age is capable of entering in Nepal army or not using if....else(&&)
#include<stdio.h>
int main()
{
    int age;
    printf("enter the age of a person:");
    scanf("%d",&age);
    if(age>=18 && age<=22)
    {
    printf("the person is capable of entering Nepal army \n");
    }
    else
    {
printf("the person is not capable of entering Nepal army\n");
    }
return 0;
}

