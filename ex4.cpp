#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main ()
{
   double mile,meter;
   printf("enter la distance in mile :");
   scanf("%lf", &mile);
   meter = mile*1609 ;
   printf("the distance in meter is : %f " , meter);
   
   return 0 ;
}

 
 
