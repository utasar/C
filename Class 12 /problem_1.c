#include<stdio.h>
int factorial(int num);
int main(){
    int number, result;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    result = factorial(number);
    printf("The factorial of %d is %d", number, result);
    return 0;
}
int factorial(int num){
    if(num >= 1){
        return num * factorial(num-1);
    }
    else{
        return 1;
    }
}
