#include<stdio.h>

int factorial(int n){
	int facto;
	if(n==0 || n == 1){
		facto = 1;
		return facto;
	}	
	else{
		facto	= n*factorial(n-1);	
		return facto;
	}	
}

int main(){
	int n, facto;
	printf("Enter the number: \n");
	scanf("%d", &n);
	facto = factorial(n);
	printf("The factorial of given number is %d\n",facto);	
}

