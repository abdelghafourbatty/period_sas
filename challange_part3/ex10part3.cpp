#include <stdio.h>
#include <stdlib.h>
int main ( )
{

    int n , sum , i ;
    for ( i = 1 ; i <= 10 ; i++ ) {
    
        printf( " enter the number : " ) ; scanf ( "%d" , &n ) ;
        if ( n > 0 ) sum += n ;
    }
    printf ( " sum : %d " , sum ) ;
    return 0 ;
}
