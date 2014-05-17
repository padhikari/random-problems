#include<stdio.h>

int main(int argc, char *argv[]){
    
    int first =0;
    int second =1;
    int next,n,i;
    
    printf("Enter the number:\n");
    scanf("%d",&n);
    
    printf("The first %d terms of fibonacci series:\n",n);
    
    for(i=0;i<n;i++){
        if(i<=1){
            next = i;
        }
        else{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n",next);
    }
    printf("\n");
    return 0;
}