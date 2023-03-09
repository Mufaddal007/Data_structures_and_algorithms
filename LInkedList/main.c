#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
};
void traversal(struct node *ptr){
    do{
       printf("%d ",ptr->data);
       ptr=ptr->next;
    }while(ptr->next!=NULL);
}
int main()
{
    struct node *head, *first, *second, *third;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data=7;
    head->next=first;

    first->data=1;
    first->next=second;

    second->data=4;
    second->next=third;

    third->data=5;
    third->next=NULL;

    traversal(head);
    return 0;
}
