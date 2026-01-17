//1.Write a program in c to swap two numbers using a function.

#include<stdio.h>
void swap(int a, int b);
int main()
{
int a=2,b=4;\
printf("before swaping:n1=2,n2=4");
swap(&a,&b);
printf("after swaping:n1=4,n2=2");
return 0;
}
