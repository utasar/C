#include<stdio.h>
int main()
{
    int a[200];
    printf("Size of int: %lu bytes\n",sizeof(int));
     printf("Size of float: %lu bytes\n",sizeof(float));
      printf("Size of char: %lu bytes\n",sizeof(char)); 
      printf("Size of a: %lu bytes\n",sizeof(a)/sizeof(a[0]));
}
