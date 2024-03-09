#include <stdio.h>


int main()
{
    char nm[]="Hasin Almas Mitul";
    int i=0,count=0;
    
    while(nm[i]!='\0')
    {
        printf("%c\n",nm[i]);
        i++;
        count++;
    }
    printf("Total digit used: %d",count);
    
    return 0;
}
