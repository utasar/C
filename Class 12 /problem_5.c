#include<stdio.h>
struct Data{
int item1, item2, item3,item4;
};
struct OutOfStockData{
    int store;
    int item;
};
int main(){
    struct Data org[5];
    struct OutOfStockData stock[20];
    int OutOfStockCount = 0;
    int anyOutOfStock =0;
    int totalItem1=0, totalItem2=0, totalItem3 =0,totalItem4 =0, totalInStore5 =0;

    printf("Enter the data for : \n\n");

    for(int i =0; i<5;i++){
        printf("Store %d : \n", i+1);
        printf("\tItem 1 : ");
        scanf("%d", &org[i].item1);
        printf("\tItem 2 : ");
        scanf("%d", &org[i].item2);
        printf("\tItem 3 : ");
        scanf("%d", &org[i].item3);
        printf("\tItem 4 : ");
        scanf("%d", &org[i].item4);

        if(org[i].item1 == 0){
            stock[OutOfStockCount].item = 1;
            stock[OutOfStockCount].store = i+1;
            OutOfStockCount++;
            anyOutOfStock++;
        }
        if(org[i].item2 == 0){
            stock[OutOfStockCount].item = 2;
            stock[OutOfStockCount].store = i+1;
            OutOfStockCount++;
            anyOutOfStock++;
        }
          if(org[i].item3 == 0){
            stock[OutOfStockCount].item = 3;
            stock[OutOfStockCount].store = i+1;
            OutOfStockCount++;
            anyOutOfStock++;
        }
          if(org[i].item4 == 0){
            stock[OutOfStockCount].item = 4;
            stock[OutOfStockCount].store = i+1;
            OutOfStockCount++;
            anyOutOfStock++;
        }
      
        totalItem1 = totalItem1 + org[i].item1;
        totalItem2 = totalItem2 + org[i].item2;
        totalItem3 = totalItem3 + org[i].item3;
        totalItem4 = totalItem4 + org[i].item4;
        if(i ==4){
            totalInStore5 = org[i].item1 + org[i].item2+ org[i].item3 + org[i].item4;
        }

    }
    if(anyOutOfStock != 0){
        printf("\n\n\t\t\tOut of Stock : \n");
        for(int i = 0; i<anyOutOfStock;i++){
            printf("\nItem %d at Store %d", stock[i].item, stock[i].store);
        }
    }
    printf("\n\nTotal Stock : ");
    printf("\n\tItem 1 : %d", totalItem1);
    printf("\n\tItem 2 : %d", totalItem2);
    printf("\n\tItem 3 : %d", totalItem3);
    printf("\n\tItem 4 : %d", totalItem4);
    printf("\n\nTotal Stock in Store 5 : %d", totalInStore5);

    return 0;
}
