#include<stdio.h>
int sum(int num);
int main(){
int num , result;
inputTerm:
printf("Enter a postive term : ");
scanf("%d", &num);
if(num < 0){
    printf("Enter a postive number.\n");
    goto inputTerm;

}
result = sum(num);
printf("The sum of natural number up to %d is %d", num, result);
}
int sum(int num){
    if(num == 0){
        return num; 
    }else{
        return num + sum(num-1);
    }
}
