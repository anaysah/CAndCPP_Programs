#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void travers(struct node * ptr){
    for(struct node * pos = ptr;pos!=NULL;pos=pos->next){
        printf("%d ",pos->data);
    }
}

int main(){
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * current = (struct node *)malloc(sizeof(struct node));
    struct node * temp = NULL;

    head->data = 5;
    head->next= current;

    current->data = 10;
    current->next = NULL;

    temp = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data=12;
    current->next=NULL;

    temp->next = current;

    temp = current;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 20;
    temp->next = current;

    temp = current;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 24;
    temp->next = current;
    
    temp = current;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 30;
    temp->next = current;
    current->next=NULL;

    travers(head);
    



    return 0;
}