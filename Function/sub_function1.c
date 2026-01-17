#include<stdio.h>
//1.calling Function with no arguments and no return value
//1.function declaration
void diff();
int main()
{
    //function call
  diff();
  return 0;
}


//function definition
void diff()
{
int a=20;
int b=4;
int result=a-b;
printf("the difference is:%d\n",result);
}
