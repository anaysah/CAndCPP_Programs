#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    struct node * next;
    
}*head,*second,*third;

void travers(struct node * pt){
    if (pt == NULL) return;
    printf("Element is : %d\n",pt->data);
    travers(pt->next);
}

int main() {
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 3;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 4;
    third->next = NULL;

    travers(head);
    return 0;
}