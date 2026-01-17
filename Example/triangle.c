#include<stdio.h>
int main()
{
float height,breadth,area;
printf("enter the height of triangle:");
scanf("%f",&height);
printf("enter the breadth of triangle: ");
scanf("%f",&breadth);
area=height*breadth/2;
printf("The area of triangle is %f\n",area);
return 0;
}
