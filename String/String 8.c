#include <stdio.h>
int main()
{
    char arr[30];

    printf("Enter Your Full Name: ");
    gets(arr);

    for (int i=0;arr[i]!='\0';i++)
    {
        printf("%c\n",arr[i]);
    }
    return 0;
}
