//Program to calculate sum of two numbers using function
/*
Function
steps for function are as follows:
1.Function declaration
2.Function definition
3.function call
*/
#include<stdio.h>
//function declarration
  int add (int a,int b);
  int sub(int a,int b);
  int multi(int a,int b);
  int division(int a,int b);
int main()
{
    int result1,result2,result3,result4;
    //function call
    result1=add(3, 5);
    result2=sub(4,2);
    result3=multi(2,2);
    result4=division(4,2);
    printf("hello world!! \n");
    printf("The sum is: %d\n",result1);
     printf("The subtraction is: %d\n",result2);
      printf("The multipliaction is: %d\n",result3);
       printf("The division is: %d\n",result4);
    return 0;
}

//function definition
  int add (int a,int b)
  {
    return a+b;
  }
  int sub(int a,int b)
  {
    return a-b;
  }
  int multi (int a,int b)
  {
    return a*b;
  }
  int division (int a,int b)
  {
    return a/b;
  }
