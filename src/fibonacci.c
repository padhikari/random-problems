#include<stdio.h>

int fibonacci(int n){
   if(n<=2)
   	return 1;
   else
      return ( fibonacci(n-1) + fibonacci(n-2) );
} 

int main(){
	int n, fibo;
	printf("Enter the number:");
	scanf("%d", &n);
	fibo = fibonacci(n);
	printf("The fibonacci of entered num is: %d\n", fibo);
	return 0; 
}
