#include<stdio.h>
//Function declaration
void practice(int local);

//global variable declaration
int global=100;

int main()
//variable declaration inside main function 
{
    int local=20;
    printf("Global variable inside main function:%d\n",global);
    //function call
    practice(local);
    return 0;
}

//Function definition
void practice(int local)
{
    printf("Global variable inside practise function:%d\n",local);
}
