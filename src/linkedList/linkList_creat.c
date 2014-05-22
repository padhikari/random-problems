#include<stdio.h>
#include<stdlib.h>

typedef struct linkedlist{
    int value;
    struct linkedlist * next;
}link;

void print_list(link * head){
    link * current = head;
    while(current != NULL){
        printf("%d\n",current->value);
        current = current->next;
    }
}

void add_first(link ** head, int val){
    
    link * new_node = malloc(sizeof(link));
    new_node->next = *head;
    new_node->value = val;
    *head = new_node;
}

void add_last(link * head, int val){
    
    link * current = head;
    while(current->next != NULL){
        current = current->next;
    }
    //add new node
    link * new_node = malloc(sizeof(link));
    new_node->value = val;
    new_node->next = NULL;
    current->next = new_node;
    
}

void remove_first(link ** head){
    link * current = *head;
    *head = current->next;
    free(current);
    
}

void remove_last(link * head){
    link * current = head;
    while(current->next->next != NULL){
        current= current->next;
    }
    
    link * temp = current->next;
    current->next = NULL;
    free(temp);
}

void remove_with_value(link ** head, int val){
    
    link * toDelete;
    while((*head) != NULL) {
        if ((*head)->value == val) {
            toDelete = (*head);
            *head = (*head)-> next;
            free(toDelete);
            continue;
        }
        head = &((*head)->next);
    }
}

int main(){
    
    link * node = malloc(sizeof(link));
    node->value = 2;
    node->next =NULL;
    
    add_first(&node,1);
    print_list(node);
    add_last(node,4);
    add_last(node,7);
    add_last(node,5);
    add_last(node,6);
    add_last(node, 7);
    add_last(node, 8);
    add_last(node, 9);
    add_last(node, 10);
    printf("The value in linked list is\n ");
    print_list(node);
    remove_first(&node);
    printf("The value in linked list after removing first element is\n ");
    print_list(node);
    remove_last(node);
    printf("The value in linked list after removing last is\n ");
    print_list(node);
    remove_with_value(&node,1);
    printf("The value in linked list removing with value 1 is\n ");
    print_list(node);
    remove_with_value(&node,7);
    printf("The value in linked list removing with value 7 is\n ");
    print_list(node);

    return 0;
}