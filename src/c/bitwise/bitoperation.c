#include <stdio.h>

int main()
{
    unsigned int a = 60;
    unsigned int b = 13;
    int c = 0;
    
    c = a & b;
    printf("AND Operation - Value of c is %d\n", c );
    
    c = a | b;
    printf("OR operation - Value of c is %d\n", c );
    
    c = a ^ b;
    printf("XOR operatiin - Value of c is %d\n", c );
    
    c = ~a;
    printf("Complement - Value of c is %d\n", c );
    
    c = a << 2;
    printf("LEFT shift - Value of c is %d\n", c );
    
    c = a >> 2;
    printf("RIGHT shift - Value of c is %d\n", c );
    
    return 0;
}