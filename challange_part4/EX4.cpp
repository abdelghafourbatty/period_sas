#include <stdio.h>
#include <stdlib.h>

divedeby(int n, int a)
{
    int division, i, t;
    if (n>=a){
        t=1;
        division = n/a;
        for(i=2; i<division; i++){
        if(division%i == 0){ printf("false"); t=0; break; }
    }
    }
    else printf("error");

    if(t == 1) printf("true");
}


int main()
{
    int n, a;
    printf("enter the first number: "); scanf("%d", &n);
    printf("enter the second number: "); scanf("%d", &a);
    divedeby(n, a);
    return 0;
}
