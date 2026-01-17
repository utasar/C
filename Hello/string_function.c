#include<stdio.h>
#include<string.h>
int main()
{
    /*1. String Length (strlen()):This function returns the length of a string,
    excluding the null terminator.
    */
   char str[]="Hello";
   int length =strlen(str);
   printf("Length of the string: %d\n",length);

   printf("*************************----------******************************\n");
   /*2. Concatenate strings (strcat()): This function appends a copy of the source 
   string to the destination strings.
   */
  char dest[20]="Hello";
  char src[]= "World!";
  strcat(dest,src);
    printf("concatenated  string: %s\n",dest);

    printf("*************************----------******************************\n");
    /*3. Copy strings (strcpy()): This function copies the contents of one string into another */
    char source[]="Hello";
    char destination[20];
    strcpy(destination,source);
    printf("copies string: %s\n",destination);
    return 0;
}
