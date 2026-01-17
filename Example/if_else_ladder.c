#include<stdio.h>
int main()
{
    int score;
    //Input score from the user 
    printf("enter you score:");
    scanf("%d",&score);
    //Determine grade
    if (score>=90)
    {
        printf("Grade is A\n");
    }
    else if(score>=80)
    {
         printf("Grade is B\n");
    }
    else if (score>=70)
    {
     printf("Grade is C\n");
    }
    else if (score>=60)
    {
     printf("Grade is D\n");
    }
    else if (score>=50)
    {
     printf("Grade is E\n");
    }
    else 
    {
         printf("Grade is F(Fail)\n");
    }
    return 0;
}
