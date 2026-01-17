//Write a simple c program that takes the birth year as input and prints the age of a person 

#include<stdio.h>
int main()
{
    int birthyear;
    printf("enter your birth year:");
    scanf("%d",&birthyear);
    int age;
    age=2024-birthyear;
    printf("the entered age of a person is %d\n",age);
    return 0;
}
