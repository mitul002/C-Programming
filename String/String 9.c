#include <stdio.h>
int main()
{
    char arr[30];
    int i=0;

    printf("Enter Your Full Name: ");
    gets(arr);

    while(arr[i]!='\0')
    {
        printf("%c\n",arr[i]);
        i++;
    }
    return 0;
}

