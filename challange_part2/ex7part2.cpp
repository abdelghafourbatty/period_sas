#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float x;
	printf("enter your degre :"); scanf("%f" , &x);
	if(x>10){
		printf("recale");
	} 
	else if (10>x && x<12) {
		printf("passable");
	}
	else if (12>x && x<14){
		printf("assez bein");
	}
	else if (14>x && x<16) {
		printf("bein");
	}
	else if (16>x){
		printf("tres bein");
	}
	
	return 0 ;
}
