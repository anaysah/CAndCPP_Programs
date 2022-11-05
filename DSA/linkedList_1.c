#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * current = (struct node *)malloc(sizeof(struct node));
    head->data = 5;
    head->next= current;

    current->data = 10;
    current->next = NULL;

    current = (struct node *)malloc(sizeof(struct node));
    current->data=12;
    current->next=NULL;

    head->next->next = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 20;
    head->next->next->next = current;

    printf("%d\n",head->next->next->data );



    return 0;
}