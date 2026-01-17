//Program to calculate subtraction of two numbers using function

#include<stdio.h>
//function declarration
  int sub  (int a,int b);
int main()
{
    int result1;
    //function call
    result1=sub(13, 5);
    printf("hello world!! \n");
    printf("The subtraction is: %d\n",result1);
    return 0;
}

//function definition
  int sub (int a,int b)
  {
  return a-b;
  }
