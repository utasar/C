//Program to calculate multiplication of two numbers using function

#include<stdio.h>
//function declarration
  int multi  (int a,int b);
int main()
{
    int result1;
    //function call
    result1=multi(13, 5);
    printf("hello world!! \n");
    printf("The multiplication is: %d\n",result1);
    return 0;
}

//function definition
  int multi (int a,int b)
  {
  return a*b;
  }
