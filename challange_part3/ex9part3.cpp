#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int n = 1 ;
	int nm , p ;
	printf("enter nm \n");
	scanf("%d", &nm);
	printf("enter exposant \n");
	scanf("%d", &p);
	while(p > 0){
	
	n = nm * n;
	p--;
	} 
	printf("%d" , n);

}
