#include<stdio.h>
int main()
{
  const float PI=3.14;
printf("pi:%d\n",PI);
   float area,radius,circumference;
   printf("enter the radius of circle:");
   scanf("%f",&radius);     //radius may be of decimal so float
     area=PI*radius*radius;
     circumference =2*PI*radius;
        printf("The area of circle is %f\n",area);
        printf("The circumference of cirlce is %f\n",circumference);
    return 0;
}
