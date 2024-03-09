#include <stdio.h>

int main()
{
    int i,num[]={10,15,20,25,30};
    int value =25;
    int pos;

    for(i=0;i<5;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    
    if(value!=num[i])
    printf("Invalid Number");
    
    else
    printf("%d",pos);
    
    return 0;
}
