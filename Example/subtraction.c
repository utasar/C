#include<stdio.h>
//main function
int main()
{
    //normal assignment
    int a;
    a=10;
    a=a-5;
    printf("updating value of a using normal way is %d\n ",a);

    //compound assignment
    int b;
    b=10;
    b-=5;
    printf("updating value of b using compound assignment is %d\n ",b);
    return 0;
}
