#include <stdio.h>
#include <stdlib.h>

/*delete entire linked list
but this code i not working and i dont know why*/

struct node {
    int data;
    struct node * next;
};

void travers(struct node * head){
    for(struct node * pos = head;pos!=NULL;pos=pos->next){
        printf("traversing");
        printf("%d ",pos->data);
    }
}

void deleteList(struct node ** head){
    struct node * pos= NULL;
    struct node * current=*head;
    while(current!=NULL){
        printf("yes\n");
        pos = current->next;
        free(current);
        current = pos;
    }
    
}

struct node * add(struct node **head,int data){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if(*head==NULL) {
        *head = newnode;
        return *head; 
    }
    else {
        (*head)->next=newnode;
        return newnode;
    }
}

int main(){
    struct node * head = NULL;
    struct node * pos = add(&head,6);
    pos = add(&pos,10);
    struct node * help = pos;
    pos = add(&pos,7);
    pos = add(&pos,8);

    deleteList(&head);
    // travers(head);
    printf("%d\n",head->data);
    printf("%d",head->next->data);
    return 0;
}