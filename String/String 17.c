#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[50];
    
    gets(str);
    printf("%s",str);
 
    printf("Reverse:%s \n", strrev(str));
 
    return 0;
}