#include<stdio.h>

int main(){
	int n,i,facto = 1;
	printf("Enter the number:\n");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		facto = facto*i;
	}
	
	printf("The factorial of entered num is %d\n",facto);
	return 0;	
	
}
