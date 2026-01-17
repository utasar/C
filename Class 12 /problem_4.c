#include <stdio.h>
void swapValues(int *ptr1, int *ptr2);
int main(){
    int a = 10, b =20;
    printf("Before Swapping : \n");
    printf("a  = %d\n", a);
    printf("b  = %d\n", b);
    swapValues(&a, &b);
    printf("\nAfter Swapping: \n");
    printf("a  = %d\n", a);
    printf("b  = %d\n", b);
    return 0;
}
void swapValues(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
