#include<stdio.h>

int main(){
	int n, reverse=0, temp;
	
	printf("Enter the number: \n");
	scanf("%d",&n);
	
	temp = n;
 
  while (n != 0){
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n = n/10;
   }
   if(reverse==temp)
   	printf("Palindrome\n");
   else
   	printf("Not a palindrome\n");	
	
}
