#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F, C;
    printf("enter the temperature in Fahrenheit: ");
    scanf("%f", &F);
    C=(F-32)/1.8;
    printf("the temperature in Celsius : %f \n", C);
    return 0;
}
