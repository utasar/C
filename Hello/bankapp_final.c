#include<stdio.h>
int main(){
    char name[50];
    int anumber;
    float balance;
    int option=0;
    int qnumber;
    float dwbalance;
    printf("enter customer name:");
    scanf("%s",name);
    printf("enter account number:");
    scanf("%d",&anumber);
    printf("enter intial balance:");
    scanf("%f",&balance);
    printf("Account created succesfully!!!\n");
    printf("\n");
    for(int i=0;option!=5;i++){
        printf("Bank Management System \n");
        printf("1. Add customer \n");
        printf("2. Display customer\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Exit \n");
  printf("enter a choice:");
scanf("%d",&option);       
switch (option)
{
case 1:
printf("Any other previous account will be deleted \n");
    printf("enter customer name:");
    scanf("%s",name);
    printf("enter account number:");
    scanf("%d",&anumber);
    printf("enter intial balance:");
    scanf("%f",&balance);
    printf("Account created succesfully!!!\n");
    printf("\n");
break;
case 2:
    printf("Customer name:%s \n",name);
    printf("Account number:%d \n",anumber);
    printf("Your balance:$%f \n",balance);
    printf("\n");
    break;
    case 3:
    printf("enter your account number:");
    scanf("%d",&qnumber);
    if(anumber==qnumber){
         printf("enter depost amount:");
         scanf("%f",&dwbalance);
         printf("deposit successful!!!");
         balance+=dwbalance;
         printf(" your current balance is $%f\n",balance);
    }
    else{
         printf("Invalid account number");
    }
    break;
    case 4:
        printf("enter your account number:");
    scanf("%d",&qnumber);
    if(anumber==qnumber){
         printf("enter withdraw amount:");
         scanf("%f",&dwbalance);
         printf("withdrawn successful!!!");
         balance-=dwbalance;
         printf(" your current balance is $%f\n",balance);
    }
    else{
         printf("Invalid account number");
    }
    break;
}
    }
    printf("thank you for using us");
    return 0;  
}
