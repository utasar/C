#include<stdio.h>

//Function declaration
void changeValue(int *ptr);

int main()
{
    int num=10;
    printf("Before calling the function,num=%d\n",num);

    //calling the function with num as argument
    changeValue(&num);

    printf("after calling the function,num=%d\n",num);
    return 0;
}

//function definition
void changeValue(int *ptr)
{
    //Dereferencing the pointer and changing the value of the variable it points to 
  *ptr=20;
    printf("Inside the function,*ptr=%d\n",*ptr);
}
