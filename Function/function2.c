//Return type(int,float,char)
//No return type (void)
//Arguments function_name(type 1 arg 1,type2 arg2)
//No arguments function_name()

//1.calling Function with no arguments but return value
#include<stdio.h>

/*
1.Function declaration
syntax:
return type function_name(type 1 argument 1,....type n argument n);

*/
int sum();
int main()
{
    /*
    3.Function call
    syntax:
    function_name(argument 1,.....argument n);
    */
   int final_sum=sum();
   printf("sum is %d\n",final_sum);
   return 0;
}

/*
2.Function declaration 
syntax:
return type function_ name(type 1 argument 1,....type n argument n)
{
    function_body;
}
*/
int sum()
{
    int a=10;
    int b=20;
    int sum=a+b;
    return sum;
}
