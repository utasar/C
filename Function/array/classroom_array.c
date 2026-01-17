//Program to take 5 values from the user and store them in an array using loop. 
//Print the elements stored in the array using seperate for loop.

#include<stdio.h>
int main()
{
    int values[5];
    printf("enter 5 integers:\n");
    //taking input and storing it in an array
    for(int i=0;i<5;i++)  
    {
         printf("enter number %d:",i+1);
         scanf("%d",&values[i]);
    }
    printf("displaying integers:");
    //printing elements of an array
    for(int i=0;i<5;i++)
    {
        printf("%d\n",values[i]);
    }
    return 0;
}
