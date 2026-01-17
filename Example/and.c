#include<stdio.h>
int main()
{
    int a=5,b=10;
    //True-1 and False-0
    int result1=a>b;  //0
    int result2=b>a; //1
    printf("result1 is %d\n",result1);
     printf("result2 is %d\n",result2);

     //AND(&&)
     int result3=a>0 && b>0;  //1&&1
     printf("result3 is %d\n",result3);

     //OR(||)
     int result4=a>b || b>0;
     printf("result4 is %d\n",result4);

     //NOT(!)
     int flag=1;
     int result5=!flag;
     printf("result5 is %d\n",result5);


     //EQUALS TO(==)
     int result6=(a==b);
    printf("result of equal to(=)operator is %d\n",result6);

    //NOT EQUALS TO(!=)
    int result7=(a!=b);
       printf("result of not equal to(!=)operator is %d\n",result7);

       //GREATER THAN(>)
       int result8=(a>b);
       printf("result of greater than(>) to operator is %d\n",result8);

       //LESS THAN(<)
       int result9=(a<b);
         printf("result of less than(<) to operator is %d\n",result9);

         //GREATER THAN OR EQUAL TO (>=)
         int result10=(a>=b);
          printf("result of greater than or equal to(>=) to operator is %d\n",result10);

          //LESS THAN OR EQUAL TO(<=)
          int result11=(a<=b);
          printf("result of less than or equal to(<=) to operator is %d\n",result11);
     return 0;
}  
