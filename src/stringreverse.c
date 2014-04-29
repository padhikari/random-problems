
#include<stdio.h>
#include<string.h>

void reverse(char * string){
    int i;
    int len;
    char temp;
    len = strlen(string);
    for(i=0; i<(len-1)/2;i++){
        temp =string[i];
        string[i] = string[(len-1)-i];
        string[(len-1)-i] = temp;
    }
    
    puts(string);
    
}

int main(){
    
    char string[100];
    
    printf("Enter the string: \n");
    gets(string);
    reverse(string);
    
    
}


