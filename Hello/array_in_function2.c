#include<stdio.h>

//Function declaration
void printArray(int arr[],int size);

int main()
{
    //Array declaration and initialization 
    int myArray[]={1,2,3,4,5};
    int size=sizeof(myArray)/sizeof(myArray[0]); //calculate the size of the array
    printf("Size of myArray is %lu\n",sizeof(myArray));
    printf("Size of myArray[0] is %lu\n",sizeof(myArray[0]));
        printf("Actual Size of myArray is %d\n",size);

    printf("Array before calling function !!\n",size);
    for(int i=0;i<size;i++)
    {
        
        printf("%d\n",myArray[i]);
    }
    //call the function and pass the array
    printArray(myArray,size);
    printf("array after calling function!!\n");
    for(int i=0;i<size;i++)
    {
       printf("%d\n",myArray[i]); 
    }
    return 0;
}

//function definition to print the elements of the array
void printArray(int arr[],int size)
{
    printf("Array inside for in function!!\n");
    for (int i=0;i<size;i++)
    {
        arr[i]=arr[i]+10;
    }
}
