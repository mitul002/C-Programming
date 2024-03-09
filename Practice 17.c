#include<stdio.h>
#include<conio.h>
int main()
{
    char low , up;

    printf("Enter uppercase letter:");
    scanf("%c",&up);

    low=tolower(up);

    printf("Lowercase letter %c",low);

    getch();
}
