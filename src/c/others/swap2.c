#include<stdio.h>
void swap(int x, int y);

int main(){
    int x,y;
    printf("Enter x:");
    scanf("%d", &x);
    printf("Enter y:");
    scanf("%d",&y);
    swap(x,y);
    return 0;
}

void swap(int x, int y){
    x=x^y;
    y=x^y;
    x=x^y;
    
    printf("x: %d\n",x);
    printf("y:%d\n",y);
    
}