#include <stdio.h>


int main()
{
    char str1[]="My Name is ";
    char str2[]="Hasin Almas Mitul";
    
    strcat(str1,str2); //String 2 added in string 1

    printf("Connected String:%s\n\n",str1);
    
    printf("String 2: %s\n\n",str2);
    
    return 0;
}
