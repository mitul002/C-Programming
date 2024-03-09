#include<stdio.h>

int main()
{
    char str1[40], str2[40];
    int i=0,j, length=0;

    gets(str1);

    while(str1[i]!='\0')
    {
        i++;
        length++;
    }

    for(j=0, i=length-1; i>=0;i--, j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0'; //when loop over then the null character will print

    printf("Str1: %s\n",str1);
    printf("Str2: %s\n",str2);
    
    int x=strcmp(str1,str2);
    
    if(x==0)
    printf("Palindrome");
    else
    printf("Not Palindrome");

    return 0;
}
    