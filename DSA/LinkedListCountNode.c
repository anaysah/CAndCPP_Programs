#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int countNode(struct node * head){
    int count=0;
    if(head->next==NULL) return count;
    // pos = head;
    for(struct node * pos=head;pos->next!=NULL;pos=pos->next){
        count++;
    }
    return count;
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

    printf("The No of element is %d\n", countNode(head));
    return 0;
}