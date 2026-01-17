#include<stdio.h>
int main()
{
    for (int i=0;i<10;i++)
    {
        if(i==5)
        {
            break; //terminate the loop if i==5 condition is meet.
        }
        printf("%d\n",i);
    }
    return 0;
}
