#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
    while(i<100)
{
    printf("%d\n",i);
    sum=sum+i;
    i=i+1;
   }
   printf("sum is %d\n",sum);
   return 0;
}
