#include<stdio.h>
#include<conio.h>
int main()
{
    char low , up;

    printf("Enter lowercase letter:");
    scanf("%c",&low);

    up= toupper(low);

    printf("Uppercase letter %c",up);

    getch();


}
