#include<stdio.h>

int main(){
	int n, remainder, sum = 0;
	
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(n!=0){
		remainder = n%10;
		sum = sum+remainder;
		n = n/10;
	}
	printf("the sum of digits are: %d\n",sum);
}
