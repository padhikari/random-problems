#include<stdio.h>

int stringLen(char *);
void stringrev(char *);

int main(){
    char string[100];
    printf("Enter the string\n");
    gets(string);
    stringrev(string);
    return (0);
}

int stringLen(char * string){
    int length=0;
   while( *(string+length) != '\0'){
        length++;
    }
    return length;
}
void stringrev(char *string){
    
    int i, length;
    char *begin, *end, temp;
    
    begin = string;
    end = string;
    
    length = stringLen(string);
    
    for ( i = 0 ; i < ( length-1) ; i++ ){
        end++;
    }

    for ( i = 0 ; i < length/2 ; i++ )
    {
        temp = *end;
        *end = *begin;
        *begin = temp;
        
        begin++;
        end--;
    }
    printf("Reverse string is %s\n", string);
}

