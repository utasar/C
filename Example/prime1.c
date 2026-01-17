#include<stdio.h>
int main()
{
    int i=13;
    while(i<=100)
    {
        int is_prime=0;
        int j=1;
        while(j<=i)
        {
            if(i%j==0)
            {
          is_prime=is_prime+1;
        }
        j=j+1;
    }
    if(is_prime ==2)
    {
        printf("%d\n",i);
    }
    i=i+1;
    }
    return 0;
} 
