#include<stdio.h>
#include<conio.h>
int main()
{
 char lower;

 printf("Enter a lower case letter:"); // A=65 , a=97. Difference=32
 scanf("%c",&lower);
 printf("The upper case letter is: %c", lower-32);

 getch();

}
