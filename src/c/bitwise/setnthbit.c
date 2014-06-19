#include<stdio.h>
int set_bit(int number , int postion);

int main()
{
    int result;
    result=set_bit(8,6);
    printf("Result is : %d\n", result);
    
}

int set_bit(int number , int position)
{
    return number |(1<<position);
}