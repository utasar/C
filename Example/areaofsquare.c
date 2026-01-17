//WAP to calculate the Area of the Square.  Formula: Area of square = side*side

#include<stdio.h>
int main()
{
    //declare variable
    float lenght,breadth,area;
    //input area of square
    printf("enter the lenght:");
    scanf("%f",&lenght);
    printf("enter the breadth:");
    scanf("%f",&breadth);
    //calculate  the area
    area =lenght*breadth;
    //print the result 
    printf("The area of square is %f\n",area);
    return 0;
}
