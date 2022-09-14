#include <stdio.h>
#include <stdlib.h>
add ( int a , int b ) {
    int c = a + b ;
   printf ( " %d + %d =%d " , a , b , c ) ;
}
int main ( )
{
    int a , b ;
   printf ( " enter the first number : " ) ; scanf ( "%d" , &a ) ;
    printf ( " enter the second number : " ) ; scanf ( "%d" , &b );
    add ( a , b ) ;
    return 0 ;
    
}
