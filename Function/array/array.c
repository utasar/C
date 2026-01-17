#include<stdio.h>
int main()
{
    //int c=5,d=2;
    //1.Declaration of array with size
    int array[5];

    //Assigning value to elements of array
    array[0]=1;
    array[1]=2;    
    array[2]=3;
    array[3]=4;
    array[4]=5;
    printf("%d\n",array[1]);
    //declaring array
    int array2[]={10,11,12};
    printf("%d\n",array2[0]);
    printf("%d\n",array2[1]);
    printf("%d\n",array2[2]);
    printf("%d\n",array2[3]);
    printf("%d\n",array2[4]);
    printf("%d\n",array2[5]);
    return 0;
}
