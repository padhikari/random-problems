#include<stdio.h>
int clear_bit(int number , int postion);

int main()
{
    int result;
    int number, position;
    
    printf("Enter the number:\n");
    scanf("%d", &number);
    printf("Enter the postion to clear:\n");
    scanf("%d", &position);
    
    result=clear_bit(number, position);
    printf("Result is : %d\n", result);
    
}

int clear_bit(int number , int position)
{
    int mask = ~(1<<(position-1));
    int result = number & mask;
    return result;

}