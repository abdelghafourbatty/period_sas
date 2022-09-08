#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,c;
printf ( "Enter a:");
scanf ("%d",&a);
printf("Enter b:");
scanf ("%d",&b) ;
printf("Enter c :");
scanf ("%d",&c) ;
printf ("la somne : %d", (a+b+c));
printf("\n la moyenne : %.2f", (float) (a+b+c)/3);
}

