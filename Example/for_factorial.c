#include<stdio.h>
int main()
{
    //variable declaration
    int i,number,factorial;
    number=5;
       factorial=1;
    //for loop
    for(i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of %d is %d\n",number,factorial);
    return 0;
}
