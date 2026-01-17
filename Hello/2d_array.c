#include<stdio.h>
int main()
{
    //declaration and initialization of a 2D array
    int matrix [3][3]={
        {1,2,3},   //Frst row 
        {4,5,6},   //second row 
        {7,8,9},  //third row 
         };
         //Accessing elements of the 2D array
         printf("elements of the 2D array:\n");
         for(int i=0;i<3;i++)
         {
            for(int j=0;j<3;j++)
            {
                printf("%d\t",matrix[i][j]);   //[row][column]
            }
            printf("\n");
         }
         return 0;
}
