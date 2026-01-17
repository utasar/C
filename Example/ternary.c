#include<stdio.h>
int main()
{
    int number;

    //Input a number from the user
    printf("enter an integer:");
    scanf("%d",&number);

    //using the ternary operator to check if the number is even or odd
    (number %2)==0 ? printf("even\n"): printf("odd\n");
    return 0;
}
