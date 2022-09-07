#include <stdio.h>
#include <stdlib.h>

int main()
{
    double mile , metr ;
    printf("metr : \n");
    scanf("%lf", &metr);
    mile = metr * 1609;
    printf("la distance en mile est : %lf \n", mile);
    return 0 ;
}
