#include <stdio.h>
int main()
{
    char name[50];
    int age;
    char address[50];

    printf("Enter your name:");
    scanf("%s" , name );

    printf("Enter your age:");
    scanf("%d" , age);

    printf(" Enter your address:");
    scanf("%[^\n] , address");

    printf("\n -----Student Details-----\n");
    printf("Name     : %s\n" , name);
    printf("Age      : %d\n" , age);
    printf("Address  : %s\n" , address);

    return 0;

}