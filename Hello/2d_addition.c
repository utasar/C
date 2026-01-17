//Write a program that performs 2d array addition

#include<stdio.h>
int main()
{
     int matrix1[3][3]={{1,2,3},
                        {4,5,6},    
                        {7,8,9}};
         int matrix2[3][3]={
        {9,8,7},
        {6,5,4},    
        {3,2,1} 
         };
         //define a result matrix to store the addition
         int result[3][3];
         
         //perform addition
         for(int i=0;i<3;i++)
         {
            for(int j=0;j<3;j++)
            {
                result[i][j]= matrix1[i][j] + matrix2[i][j];
            }
         }

         //Display the result
         for (int i=0;i<3;i++)
         {
            for(int j=0;j<3;j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
         }
         return 0;
}
