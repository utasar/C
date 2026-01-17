#include<stdio.h>
int main ()
{
    int marks[5];
printf("Enter marks: \n");
// Taking marks as input from user & Storing  it in an array
for(int i=0;i<5;i++){
    printf("Enter marks %d: ",i+1);
    scanf("%d",&marks[i]);
}
// calculating  total
int total=0;
for(int i=0;i<5;++i){
total+=marks[i];
}

// calculating average
float average =(float )total/5;

printf("\n Total marks %d ",total);
printf("\n Average Marks %f", average); 
return 0;
}
