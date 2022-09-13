#include <stdio.h>
#include <stdlib.h>
int main ( )
{

    int p , n , i , t ;
    printf(" enter the number : "); scanf ( "%d" , &n ) ;
    for ( p=2 ; p<=n ; p++ ) {
        t = 1 ;
        for ( i = 2 ; i<p ; i++ ) {
            if ( p%i == 0 ) {
                t = 0 ;
                break ;
            }
        }
        if ( t == 1 ) printf( "%d " , p ) ;
    }
    return 0 ;
}
