#include<stdio.h>
// function declaration or prototype 
int add(int a,int b);//return type function name (type(1) argument (1),....,type(n) argument (n));
int main(){
    int result1;
    //function call 
     result1=add(3,5);//function name (argument(1),.....,argument(n));
    printf("the sum is:%d\n",result1);
        return 0;
    }

//function definition 
int add(int a,int b){ //return_type function_name(type(1) argument(1),..,type(n) argument (n))
    return a+b;
}
