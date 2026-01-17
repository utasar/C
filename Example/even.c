#include<stdio.h>
int main()
{
    int num;
    num=6;
    int result =(num%2==1);
    printf("The condition for if is %d\n ",result);   //True(1) and false(0)
    if(result)
    {
    printf("Odd number\n");
    }
     else
     {
        printf("Even number\n");
     }
//printf("code runs here\n");
return 0;
}
