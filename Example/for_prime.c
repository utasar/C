#include<stdio.h>
int main (){
    int number,i,is_prime=0;
    number=13;
    //for (intialization;condition;increment)
    for(i=1;i<=number;i++){

        //if condition for remainder 0
        if (number %i==0){
         is_prime=is_prime+1;
        }
    }
    printf("is_prime=%d\n",is_prime);

    //if condition for prime number 
    if (is_prime==2){
        printf("%d is a prime number.\n",number);
    } else {
        printf("%d is not a prime number.\n",number);
    }
    return 0;
}
