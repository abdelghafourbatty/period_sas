#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b;
	printf("enter a :"); scanf("%d", &a);
	printf("enter b :"); scanf("%d", &b);
	if( a == b){
		printf("%d ", (a+b)*3 );
	}else{
		printf("%d", a+b);
	}
	
}
