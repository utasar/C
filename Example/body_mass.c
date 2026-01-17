//1. Write a program to print the body mass index of a person using function with args and return type.

#include<stdio.h>
// Function prototype
float calculate_BMI(float weight, float height);
int main()
{
    // Get user input for weight and height
    float weight,height;
printf("enter the weight in kilograms:");
scanf("%f",&weight);
printf("enter the height in meters:");
scanf("%f",&height);

// Call the function to calculate BMI
float BMI = calculate_BMI(weight, height);
// Display the calculated BMI
 printf("%f",BMI);
return 0;
}
// Function to calculate BMI
 float caluclate_BMI(float weight, float height)
 {
// BMI formula: weight (kg) / (height (m) * height (m))
float BMI= weight/(height*height);
return BMI;
 }
