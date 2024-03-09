#include <stdio.h>
int main()
{
    char arr[5]; /*If we take array[5] and print array[5]
                then we will get a Gerbage value. So we need
                to add a null character ( array[5]=\0) to remove it*/
    arr[0]='H';
    arr[1]='e';
    arr[2]='l';
    arr[3]='l';
    arr[4]='o';
    arr[5]='\0';


    printf("%s\n",arr);

    return 0;
}
