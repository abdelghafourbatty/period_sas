#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ( )
{
    float x1 , yl , x2 , y2 , D ;
    printf ( " point A \n " ) ;
    printf ( " enter xl : " ) ; scanf ( " %f " , &x1 ) ;
    printf ( " enter yl : " ) ; scanf ( " %f " , &yl ) ;
    printf ( " point B \n " ) ;
    printf ( " enter x2 : " ) ; scanf ( " %f " , &x2 ) ;
    printf ( " enter y2 : " ) ; scanf ( " %f " , &y2 ) ;
        sqrt ( ( x2 - x1 ) * ( x2 - x1 ) + ( y2 - yl ) * ( y2 - yl ) ) ;
    printf ( " the distance between A and B is : % f " , D ) ;
    return 0 ;
}
