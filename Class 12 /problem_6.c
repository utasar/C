#include <stdio.h>
#include <string.h>
struct DATA {
  int rollno;
  char name[100], address[100], phone[15];
};
int main() {
  struct DATA std[100];
  FILE *fptr;
  fptr = fopen("std.txt", "w+");
  char option[3];
  printf("Enter details : \n");
  int total = 0, adding = 1;
  while (adding == 1) {
    printf("Roll no : ");
    scanf("%d", &std[total].rollno);
    printf("Name: ");
    scanf("%s", std[total].name);
    printf("Address : ");
    scanf("%s", std[total].address);
    printf("Phone Number : ");
    scanf("%s", std[total].phone);
    total++;
    printf("Do you wanna add more data? (yes/no)");
    scanf("%s", option);
    if (strcmp(option, "no") == 0) {
      adding = 0;
    }
  }
  for (int i = 0; i < total; i++) {
    fprintf(fptr, "Roll no: %d\nName: %s\nAddress: %s\nPhone Number: %s\n\n",
            std[i].rollno, std[i].name, std[i].address, std[i].phone);
  }
  printf("\nData Saved. \n\t\t\tSaved Data in file: \n\n");
  rewind(fptr);
  char c = getc(fptr);
  while (c != EOF) {
    printf("%c", c);
    c = getc(fptr);
  }
}
