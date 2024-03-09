#include<stdio.h>
#include<conio.h>
int main()
{
    int num;


    printf("Enter a decimal number:");
    scanf("%d", &num);
    printf("Octal number is: %o \n", num);

    printf("Enter an Octal  number:");
    scanf("%o", &num);
    printf("Decimal number is: %d \n", num);



    printf("Enter a decimal number:");
    scanf("%d", &num);
    printf("Hexa-Decimal number is: %x \n", num);

    printf("Enter a Hexa-Decimal number:");
    scanf("%x", &num);
    printf("Decimal number is: %d \n", num);



    printf("Enter a Hexa-Decimal number:");
    scanf("%x", &num);
    printf("Octal number is: %o \n", num);

    getch();
}
