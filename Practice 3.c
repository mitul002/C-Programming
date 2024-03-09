/*This is how we can use escape sequence
 in C programming*/
#include<stdio.h>
int main()
{
    printf("SOME SPECIAL CHARACTERS: \' , \\ , \" , \?  \n\n" // usage of \' , \\ , \" , \?

           "\t What is Lorem Ipsum? \n \a"                    // usage of \t ,\n and \a
           "\t \f Lorem Ipsum is simply dummy text of the printing and typesetting industry. #% \b \b \b \n"     // usage of \f and \b
           "\t \v Lorem Ipsum has been the industry's standard dummy text ever since the 1500s,\n"               // usage of \v and \t
           "\t when an  unknown printer took a galley of type and scrambled it to make a \0 type specimen book " // usage of \0
          );

    getch();
}
