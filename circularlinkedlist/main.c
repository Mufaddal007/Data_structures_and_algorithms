#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node* next;
};
struct node* create()
{
struct node* head=(struct node* )malloc(sizeof(struct node));
struct node* first=(struct node* )malloc(sizeof(struct node));
struct node* second=(struct node* )malloc(sizeof(struct node));
struct node* third=(struct node* )malloc(sizeof(struct node));
struct node* fourth=(struct node* )malloc(sizeof(struct node));
struct node* fifth=(struct node*)malloc(sizeof(struct node));

head->data=0; head->next=first;
first->data=1; first->next=second;
second->data=2; second->next=third;
third->data=3; third->next=fourth;
fourth->data=4; fourth->next=fifth;
fifth->data=5; fifth->next=head;

return head;
}
void traversal(struct  node* ptr)
{
  struct node* headptr=ptr;
  while(ptr->next!=headptr){
        printf("%d ",ptr->data);
     ptr=ptr->next;}
     printf("%d ",ptr->data);

}
struct node* insertfirst(struct node* ptr, int data)
{   struct node* previoushead=ptr;
    struct node* mynode=(struct node*)malloc(sizeof(struct node));
    mynode->data=data;
    mynode->next=ptr;
    while(ptr->next!=previoushead)
        {ptr=ptr->next;}
    ptr->next=mynode;
    return mynode;
}
void insertlast(struct node* ptr, int data)
{
  struct node* head=ptr;
  while(ptr->next!=head){ptr=ptr->next;}
  struct node* mynode=(struct node*) malloc(sizeof(struct node));
  ptr->next=mynode;
  mynode->data=data;
  mynode->next=head;
}
void insertatindex(struct node* ptr, int index, int data)
{int i=0;
  while(i<index-1)
    {ptr=ptr->next;
      i++;}
    struct node* mynode=(struct node*)malloc(sizeof(struct node));
    mynode->next=ptr->next;
    ptr->next=mynode;
    mynode->data=data;

}
int main()
{
    struct node* head=create();
    printf("Created Linked List: ");
    traversal(head);
    printf("\n");

    printf("Inserting at first index: ");  //insert at beginning
    head=insertfirst(head,7);
    traversal(head);
    printf("\n");

    printf("Inserting at last index: ");    // Insert at last index
    insertlast(head, 9);
    traversal(head);
    printf("\n");

    printf("Inserting at given index: ");    // Insert at given index
    insertatindex(head, 3, 10);
    traversal(head);
    printf("\n");


    return 0;
}
