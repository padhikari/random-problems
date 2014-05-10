#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct linkedlist{
        
    int val;
    struct linkedlist *next;
};

struct linkedlist *head = NULL;
struct linkedlist *curr = NULL;

struct linkedlist * creat_list(int val){
    
    printf("\n creating list with headnode as [%d]\n",val);
    struct linkedlist *ptr =(struct linkedlist*)malloc(sizeof(struct linkedlist));
    if(ptr == NULL){
        printf("Creation failed\n");
        return NULL;
    }
    ptr->val = val;
    ptr->next;
    
    head = curr = ptr;
    return ptr;
}

struct linkedlist * add_to_list(int val, bool add_to_end){
    
    if(head == NULL){
        return(creat_list(val));
    }
    
    if(add_to_end)
        printf("\n Adding node to end of list with value[%d]\n",val );
    else
        printf("\n Adding node to beginning of list with value [%d]\n", val);
    struct linkedlist *ptr = (struct linkedlist*)malloc(sizeof(struct linkedlist));
    if(NULL == ptr)
    {
        printf("\n Node creation failed \n");
        return NULL;
    }
    ptr->val = val;
    ptr->next = NULL;
    
    if(add_to_end)
    {
        curr->next = ptr;
        curr = ptr;
    }
    else
    {
        ptr->next = head;
        head = ptr;
    }
    return ptr;
    
}

void print_list(void)
{
    struct linkedlist *ptr = head;
    
    printf("\n -------Printing list Start------- \n");
    while(ptr != NULL)
    {
        printf("\n [%d] \n",ptr->val);
        ptr = ptr->next;
    }
    printf("\n -------Printing list End------- \n");
    
    return;
}

int main(void)
{
    int i = 0,;
    struct linkedlist *ptr = NULL;
    
    print_list();
    
    for(i = 5; i<10; i++)
        add_to_list(i,true);
    
    print_list();
    
    for(i = 4; i>0; i--)
        add_to_list(i,false);
    
    print_list();
    
    return 0;

}
