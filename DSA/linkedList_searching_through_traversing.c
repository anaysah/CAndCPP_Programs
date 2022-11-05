#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node * addTheEnd(struct node * ptr,int n){
    struct node *node = (struct node *)malloc(sizeof(struct node));

    ptr->next = node;
    node->data = n;
    node->next = NULL;
    return node;
}


void traversLinkedList(struct node * head){
    for (struct node *pos=head;pos!=NULL;pos = pos->next){
        printf("%d ",pos->data );
    }
    printf("\n");
}

int search(struct node * head,int num){
    int i =0;
    for (struct node *pos=head;pos!=NULL;pos = pos->next){
        if (pos->data==num) return i;
        else i++;
    }   
    return -1;
}


int main(){
    struct node * head = (struct node *)malloc(sizeof(struct node));
    head->data = 5;
    head->next= NULL;
    struct node * last = head;
    last = addTheEnd(last,40);
    last = addTheEnd(last,4);
    last = addTheEnd(last,20);
    traversLinkedList(head);

    int postion = search(head,4);
    if (postion!=-1) printf("\nThe element founded on %d index",postion);
    else printf("\nnot founded");
    
    return 0;
}

