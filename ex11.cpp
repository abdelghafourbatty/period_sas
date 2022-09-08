#include <stdio.h>
#include <stdlib.h>
 
int main ( )
{
    float lon,lar ;
    printf ( " enter la longeur : " ) ; scanf ( "%f" , &lon );
    printf ( " enter la largeur : " ) ; scanf ("%f", &lar);
    printf ("la circonference : %.2f" , (2*(lon+lar)));
    return 0 ;
}
