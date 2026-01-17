//Return type(int,float,char)
//No return type (void)
//Arguments function_name(type 1 arg 1,type2 arg2)
//No arguments function_name()

//1.calling Function with arguments and no return value
#include<stdio.h>

/*
1.Function declaration
syntax:
return type function_name(type 1 argument 1,....type n argument n);

*/
void sum(int a, int b);
int main()
{
    /*
    3.Function call
    syntax:
    function_name(argument 1,.....argument n);
    */
   sum(5,6);
}

/*
2.Function declaration 
syntax:
return type function_ name(type 1 argument 1,....type n argument n)
{
    function_body;
}
*/
void sum(int a, int b)
{
    int sum=a+b;
printf("sum is %d\n",sum);
}
