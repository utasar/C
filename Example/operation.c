#include<stdio.h>
int main()
{
    int a=6+2*2;
    int b=8+2*3/2;
    int sum=a+b;
    printf("addition of a and b is %d\n",sum);
    int diff=a-b;
    printf("difference of a and b is %d\n",diff);
    int multiply=a*b;
    printf("multiplication of a and b is %d\n",multiply);
    int remainder=a/b;
    printf("remainder of a and b is %d\n",remainder);
    int modulus=a%b;
    printf("modulus of a and b is %d\n",modulus);
    return 0;
}
