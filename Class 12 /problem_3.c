#include <stdio.h>
int fibonacciSeries(int num);
int main(){
    int term, num=0;
    printf("How many terms of fibonacci series do you want to print? ");
    scanf("%d",&term);
    printf("\nFibonacci series up to %dth term is:\n", term);
    for(num = 0; num<term; num++){
        printf(" %d ",fibonacciSeries(num));
    }
    return 0;
}
int fibonacciSeries(int num){
    if(num == 0){
        return 0;
    }
    else if(num ==1){
        return 1;
    }
    else{
        return fibonacciSeries(num-1) + fibonacciSeries(num-2);
    }
}
