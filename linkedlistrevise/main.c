#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
void traversal(struct node* ptr)
{
  while(ptr->next!=NULL)
    {
     printf("%d ",ptr->data);
     ptr=ptr->next;
    }
   printf("%d ",ptr->data);
}
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    struct node *first=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    head->data=3;
    head->next=first;

    first->data=4;
    first->next=second;

    second->data=5;
    second->next=third;

    third->data=6;
    third->next=NULL;

    traversal(head);
    return 0;
}
