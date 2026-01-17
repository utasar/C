//Write a program in c to display the multiplication table of a given integer using for loop.

#include <stdio.h>
int main() 
{
  int num;
  printf("Enter an integer:");
  scanf("%d", &num);
 for(int i=500; i>=400;i--) 
  {
    printf("%d*%d = %d\n", num, i, num*i);
  }
  return 0;
}
