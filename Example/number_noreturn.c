//1. Write a program to print the number from 1 to 100 using for loop and  function with no return type.

#include <stdio.h>
void print_numbers() 
{
    for (int i = 1; i <= 100; i++) 
    {
        printf("%d\n", i);
    }
}

int main() 
{
    print_numbers();
    return 0;
}
