#include<stdio.h>

//Function declaration
void changeValue(int x);

int main()
{
    int num=10;
    printf("Before calling the function,num=%d\n",num);

    //calling the function with num as argument
    changeValue(num);

    printf("after calling the function,num=%d\n",num);
    return 0;
}

//function definition
void changeValue(int num)
{
    //changing the value of the parameter x
    num=20;
    printf("Inside the function,x=%d\n",num);
}
