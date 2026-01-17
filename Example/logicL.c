#include<stdio.h>
int main (){
    int a =5 ,b =10;
    int result1 =a>b; //0
    int result2 =b>a;//1
    printf ("result1 is %d \n",result1);
    printf ("result2 is %d \n",result2);

    //and (&&)
    int result3 =a > 0 && b > 0;  //1 && 1
    printf ("result3 is %d \n",result3);

    //or (!!)
    int result4 =a>0 || b>0; 
    printf ("results4 is %d \n",result4);

    //not (!)
    int flag =1;
    int results5 =!flag;
    printf ("results is %d \n",results5);

    //equals to 😊)
    int result6 = ( a ==b );
    printf ("results of equal to(😊 operator is %d\n,result6");

    //not equals to (!=)
    int result8 =(a!=b);
    printf ("results of not equal (!=) to operator is %d \n",result8 );
    //greater than(>)
    int result9 =(a>b);
    printf ("result of greater than (>) to operator is %d \n",result9);

    //less than (<)
    int result10 =(a<b);
    printf ("result of less than (<) to operator is %d \n",result10);

    //greater than or eqquals to (>=)
    int result11 =(a>=b);
    printf ("results of greater or equal to (>=)to operator is %d \n",result11);

    //less than or equals to (<=)
    int result12 =(a<=b);
    printf ("results of less or equal to (<=)to operator is %d \n",result12);
    return 0;
