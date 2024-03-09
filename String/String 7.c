#include <stdio.h>

int main()
{
    char arr[30];

    printf("Enter your full name: ");

   gets(arr); /* scanf can't scan a
    value after space so we need to use gets
    instead of scanf*/

    printf("%s\n",arr);

    return 0;
}

