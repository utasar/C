//3.Write a program to check if a person's age is capable of entering in Nepal army or not using nested if.
//hint:age>=18 and less than or equal to 22
 #include<stdio.h>
 int main()
 {
    //1.Declare variable
    int age;
    //display message to user for persons age
    printf("enter the person's age:");
    scanf("%d",&age);
    /*check if person pass their age */
    if(age>=18)
    {
        if (age<=22)
        {
        printf("The person is capable of entering in nepal army \n");
        }
        else
        {
            printf("The person age is not capable \n ");
        }
    }
    else
    {
        printf("The person is not capable of entering in nepal army \n");
    }
    return 0; 
     }
