#include<stdio.h>
int main()
{
    // int and int
    int a,b;
    a=9;
    b=2;
    int result1 =a/b;
    printf("result of int and int operands:%d\n",result1);

    // float and int 
    float p;
    int q;
    p=9.5;
    q=2;
    int result2=p/q;
    printf("result of float and int: %d\n", result2);

    // int and float 
    int m;
    float n;
  m=9;
 n=2.5;
 float result3=9/2.0;
 printf("result of int and float : %f\n",result3);

 // // float and float
 float r;
 float s;
 r=9.5;
 s=2;
 float result4=9.5/2.0;
 printf("result of float and float : %f\n",result4);
    return 0;
}
