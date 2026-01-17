#include<stdio.h>
//function declaration 
int diff();
int main()
//function call 
{
   int final_result=diff();
   printf("the difference is %d\n",final_result);
   return 0;
    }
//function declaration 
int diff()
{
int a=20;
int b=10;
int result=a-b;
return result;
}
