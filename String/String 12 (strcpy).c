#include <stdio.h>


int main()
{
    char source[]="Hasin Almas Mitul";
    char copy[30];
    
    strcpy(copy,source);

    printf("Source string: %s\n",source);
    
    printf("Copy string: %s\n",copy);
    
    return 0;
}
