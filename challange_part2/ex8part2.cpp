#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c ;


    printf("enter a character : ");
    scanf("%c" , &c);


    if (c>='a' && c<='z')
          printf("alphabet Mini");


    else  if(c>='A' && c<='Z')
          printf("alphabet maje");

    else
          printf("non alphabet");


}
