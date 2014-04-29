#include<stdio.h>

int main(){
    int n, i=0,j;
    int array[100];
    
    printf("Enter the decimal number: \n");
    scanf("%d",&n);
    
    while(n!=0){
        if((n%2)==0)
            array[i]=0;
        else
            array[i]=1;
        n=n/2;
        i++;
    }
    printf("The binary value of entered value is :\n");
    
    for(j=i-1;j>=0;j--)
        printf("%d",array[j]);
    
    printf("\n");
    
    return 0;
}