#include<stdio.h>
int main()
{
    int i=1;

    while(i<=5)
{
    int a=i;
printf("****************************************************************\n");
printf("start of loop %d!\n",i);
printf("the value of i is %d\n",i);
i=i+1;
printf("value of i increased after 'i=i+1' i.e i=%d\n",i);
printf("end of loop %d !\n",a);
printf("*************************************************************\n\n\n");
}
return 0;
}
