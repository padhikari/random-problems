#include<stdio.h>

int insertBits(int a, int b, int i, int j);

int main(){
    
    int a,b,i,j;
    
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d",&b);
    
    printf("Enter start position j:");
    scanf("%d", &j);
    printf("Enter end position i:");
    scanf("%d",&i);
    
    int result = insertBits(a,b,i,j);
    
    printf("The result is : %d\n",result);

    return 0;
}

int insertBits(int a, int b, int i, int j){
    
    //create mask to clear bits i through j in a
    
    int all1s = ~0;
    
    // left shift to make 1s before position j, then 0s
    int left = all1s << (j+1);
    
    // right shift to make 1s after position i, then 0s
    int right = ((all1s >> i) - 1);
    
    // all 1s except between i and j
    int mask = left | right;
    
    //clear bits j through i and put b in there
    int a_cleared = a & mask;
    int b_shifted = b << i;
    
    int result = a_cleared | b_shifted;
    
    return result;
}