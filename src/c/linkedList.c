#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    
    int val;
    struct node *next;
}linkedList;


void print_list(linkedList * head){
    
    linkedList * current = head;
    while( current != NULL){
        printf("%d\n", current->val);
        current = current->next;
    }
}

void addInLast(linkedList *head, int val){
    linkedList * current = head;
    while(current->next != NULL){
        current = current->next;
    }
    
    //add a new node
    current->next = malloc(sizeof(linkedList));
    current->next->val = val;
    current->next->next = NULL;
    
}

void addInFirst(linkedList ** head, int val){
    
    linkedList * new_node;
    new_node = malloc(sizeof(linkedList));
    new_node->val=val;
    new_node->next = *head;
    *head = new_node;
}

int removeFirst(linkedList ** head){
    int retval = -1;
    linkedList * next_node = NULL;
    
    if(*head ==NULL){
        return -1;
    }
    
    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;
    
    return retval;
}

void removeLast(linkedList * head){
    linkedList * temp = head->next;
    head->val = head->next->val;
    head->next = temp->next;
    free(temp);
}



int remove_by_value(linkedList ** head, int val){
    int retval = -1;
    linkedList * current = *head;
    linkedList * temp_node = NULL;
    
    if ((*head)->val == val) {
        return removeFirst(head);
    }
    
    while(current->next->val != val){
        if(current->next == NULL){
            return -1;
        }
        current = current->next;
    }
    temp_node = current->next;
    retval = temp_node->val;
    current->next = temp_node->next;
    free(temp_node);
    
    return retval;
    
}

int main(){
    
    linkedList *list = malloc(sizeof(linkedList));
    list->val = 1;
    list->next = malloc(sizeof(linkedList));
    list->next->val =2;
    list->next->next = malloc(sizeof(linkedList));
    list->next->next->val =3;
    list->next->next->next = malloc(sizeof(linkedList));
    list->next->next->next->val =4;
    list->next->next->next->next = NULL;
    
    printf("Initial list\n");
    print_list(list);
    
    addInFirst(&list, 5);
    printf("After adding node with value 5 in fist\n");
    print_list(list);
    
    addInLast(list,6);
    printf("After adding node with value 6 at last\n");
    print_list(list);
    
    int retval = removeFirst(&list);
    printf("Removing first element with %d value\n",retval);
    print_list(list);
    
    remove_by_value(&list, 3);
    printf("After removing node with value 3\n");
    print_list(list);
    
    removeLast(list);
    printf("After removing first node\n");
    print_list(list);
    
    return 0;
}

