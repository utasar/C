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
    printf("%d\n",array[3]);
    //declaring array
    int array2[3]={10,11,12};
    printf("%d\n",array2[0]);
    printf("%d\n",array2[1]);
    printf("%d\n",array2[2]);

    //declaring multiple variable
    int a[50] ,b[100];
      printf("%d\n",a[2]);

      //character in c
      char city[20];

      city[0]='k';
      printf("%c\n",city[0]);
      char name[5]={'k','r','i','s','h'};
      printf("%c\n",name[4]);
    return 0;
}
