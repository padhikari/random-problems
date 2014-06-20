#include<stdio.h>

int main(){
    int a,b,c;
    int count = 0;
    
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d",&b);
    
    for(c = a ^ b; c != 0; c = c & (c-1)){
        count++;
    }
    printf("The required number of bits are: %d\n", count);
    
    return 0;
    
}