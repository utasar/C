#include<stdio.h>
int main()
{
    float principalamount,rateofinterest,time,SimpleInterest;
    printf("enter the principalamount:");
    scanf("%f",&principalamount);
    printf("enter the rateofinterest:");
    scanf("%f",&rateofinterest);
    printf("enter the time:");
    scanf("%f",&time);
    SimpleInterest=principalamount*rateofinterest*time /100;
    printf("The SimpleInterest is %f\n",SimpleInterest);
    return 0;
}
