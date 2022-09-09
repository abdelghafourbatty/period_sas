#include <stdio.h>
#include <stdlib.h>

int main ( )
{
    int a , b ;
    printf ( " enter first number : " ) ; scanf ( "%d" , &a ) ;
    printf ( " enter second number : " ) ; scanf ( "%d" , &b ) ;
    if ( a == b , a < b ) {
        printf ( "%d" , b ) ;
        printf ( "%d" , a ) ;
    } else {
        printf ( "%d" , a ) ;
        printf ( "%d" , b ) ;
    }
    return 0 ;
}
