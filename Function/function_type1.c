
#include<stdio.h>
//Function Declaration
void addition_no_args_no_return();
int addition_no_args_with_return();
void addition_args_no_return(int a, int b);
int addition_args_with_return(int a,int b);
int main()
{
//Function calls 
//1.calling Function with no arguments and no return value
addition_no_args_no_return();

//2.calling function with no arguments but return value
int result_no_args_with_return= addition_no_args_with_return();
printf("sum(no args,with return):%d\n",result_no_args_with_return);

//3.calling function with arguments and no return value
addition_args_no_return(5,7);

//4.calling function with arguments and  return value
int result_args_with_return= addition_args_with_return(5,7);
printf("sum(args,with return):%d\n",result_args_with_return);
return 0;
}

//1.Function with no arguments and no return value
void addition_no_args_no_return()
{
    int a=5,b=7;
    int sum=a+b;
    printf("Sum(no args, no return);%d\n",sum);
}

//2.function with no arguments but return value
int addition_no_args_with_return()
{
    int a=5,b=7;
    int sum=a+b;
    return sum;
}

//3.Function with arguments and no return value

    void addition_args_no_return(int a,int b)
    {
    int sum=a+b;
    printf("Sum (args, no return);%d\n",sum);
}

//4.Function with arguments and  return value
int addition_args_with_return(int a, int b)
{
    int sum=a+b;
    return sum;
}
