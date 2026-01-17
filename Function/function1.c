//Return type(int,float,char)
//No return type (void)
//Arguments function_name(type 1 arg 1,type2 arg2)
//No arguments function_name()

//1.calling Function with no arguments and no return value
#include<stdio.h>

/*
1.Function declaration
syntax:
return type function_name(type 1 argument 1,....type n argument n);

*/
void sum();
int main()
{
    /*
    3.Function call
    syntax:
    function_name(argument 1,.....argument n);
    */
   printf("before calling function.\n");
sum();
printf("after calling function.\n");
sum();
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
void sum()
{
    int a=10;
    int b=20;
    int result=a+b;
    printf("sum is %d\n",result);
}
