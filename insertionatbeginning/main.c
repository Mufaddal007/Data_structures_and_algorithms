#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
};
void traversal(struct node *ptr){
  printf("%d ",ptr->data);
 if (ptr->next==NULL)  {printf("\n"); return;}
 else  {ptr=ptr->next; traversal(ptr);}
}
void update(struct node *ptr)
{
  printf("Enter data for node: ");
  scanf("%d",&ptr->data);
  char c;
  printf("continue to update? ");
  scanf("\n%c",&c);
  if (c=='y') {
        ptr->next=(struct node*)malloc(sizeof(struct node));
        update(ptr->next);}
  else{
      ptr->next=NULL;
      return ;
  }
}
struct node* insertatfirst(struct node* head, int data){
    struct node* mynode=(struct node* )malloc(sizeof(struct node));
    mynode->data=data;
    mynode->next=head;
    return mynode;
}
void insertatindex(struct node* ptr, int index, int data )
{
    int i=0;
    while(i<index-1){
        ptr=ptr->next;
        i++;}
    struct node* mynode=(struct node* )malloc(sizeof(struct node));
    mynode->data=data;
    mynode->next=ptr->next;
    ptr->next=mynode;
}
void insertatlast(struct node* ptr, int data)
{
    while(ptr->next!=NULL){
        ptr=ptr->next;}
     struct node *mynode=(struct node*)malloc(sizeof(struct node));
     ptr->next=mynode;
     mynode->data=data;
     mynode->next=NULL;

}

struct node* getptr(struct node* ptr)
{
printf("\nData of this pointer: %d", ptr->data);
printf("\nWant this node?");
char c;
scanf("\n%c",&c);
if (c=='y') return ptr;

else {
     if (ptr->next==NULL){printf("\nNo nodes left");}
    else getptr(ptr->next);}
}
void insertatpointer(struct node* ptr, int data)
{
    struct node* mynode=(struct node*)malloc(sizeof(struct node));
    mynode->data=data;
    mynode->next=ptr->next;
    ptr->next=mynode;

}
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    update(head);  // Linked List created

    printf("Before insertion: ");
    traversal(head);

    head=insertatfirst(head,10); // insert at beginning
     printf("10 inserted at beginning: ");
    traversal(head);

    insertatindex(head,3,100);    //insert in between
     printf("100 inserted at index 3: ");
    traversal(head);

    insertatlast(head, 1000);   //insert at end
    printf("1000 Inserted at end: ");
    traversal(head);

    struct node* ptr=getptr(head);
    printf("\n%d ",ptr->data);

    insertatpointer(ptr,10000);
    printf("\n10000 inserted after selected ptr: ");
    traversal(head);
    return 0;
}
