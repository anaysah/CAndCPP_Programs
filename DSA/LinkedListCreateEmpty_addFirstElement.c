#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

void travers(struct node * head){
    for(struct node * pos = head;pos!=NULL;pos=pos->next){
        printf("%d ",pos->data);
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

    travers(head);
    // printf("%d",pos->data);
    return 0;
}