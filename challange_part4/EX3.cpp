#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPrime ( int x ) {
	
    bool t = true ;
    int i ;
    for ( i=2 ; i<x ; i++ ) {
        if ( x%i == 0 ) { t=false; break; }
    }
    return t ;
}
int main ( )
{

    int x ;
    printf ( " enter the number : " ) ; scanf( "%d" , &x );
    isPrime( x );
    if ( isPrime( x ) ) printf( " the number is prime . " );
    else printf( " the number is not prime . " );
    return 0 ;
}
