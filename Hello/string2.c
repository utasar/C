#include<stdio.h>
int main() 
{
    char greetings[]={'H', 'e', 'l', 'l', 'o', 'W', ' ', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[]= "Hello World!";

    printf("%lu\n",sizeof(greetings));   //output 13
     printf("%lu\n",sizeof(greetings2));   //output 13

     /*
     The difference between the two ways of creating strings, is that the first method is easier to and you do not have to include the \0 character,
     as c will do it for you

     You should note that the size of both arrays is the same:
     They both have 13 characters (space also counts as a character by the way),
     including the \0 character:
     */
     return 0;
}
