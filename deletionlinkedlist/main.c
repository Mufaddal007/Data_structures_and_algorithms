#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node* next;
};
void create(struct node* ptr)
{
     printf("Enter data: ");
     scanf("%d",&(ptr->data));
     printf("Continue to update? ");
     char c;
     scanf("\n%c",&c);
     if (c=='y')
        {struct node* mynode=(struct node*)malloc(sizeof(struct node));
         ptr->next=mynode;
         create(mynode);}
     else {ptr->next=NULL; return;}
}
void traversal(struct node* ptr){
  printf("%d ",ptr->data);
  if (ptr->next!=NULL){traversal(ptr->next);}
  else return ;
}
void deleteval(struct node* ptr, int val)
{
   while((ptr->next)->data!=val)
    { ptr=ptr->next;}
   struct node* mynode=(ptr->next)->next;
   free(ptr->next);
   ptr->next=mynode;
   free(mynode);
}
void deleteatindex(struct node* ptr, int index)
{
  int i=0;
  while(i<index-1){
     ptr=ptr->next;  i++;  }
  struct node* mynode=(ptr->next)->next;

  free(ptr->next);
  ptr->next=mynode;
  free(mynode);
}
struct node* deletefirst(struct node* ptr){
struct node* newnode=ptr->next;
free(ptr);
return newnode;
}

void deletelast(struct node* ptr)
{
while(((ptr->next)->next)!=NULL)
    {ptr=ptr->next;}
     free(ptr->next);
     ptr->next=NULL;
}
int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    create(head);
    printf("Created Linked-List: ");
    traversal(head);
    printf("\n");

    head=deletefirst(head);   // Deletion of first node  CASE 1
    printf("After deleting first node: ");
    traversal(head);
    printf("\n");

    deleteatindex(head,3);  // Deletion at index     CASE 2
    printf("After deleting at index 3: ");
    traversal(head);
    printf("\n");

    deletelast(head);     //  Deletion of last node     CASE 3
    printf("After deleting last node: ");
    traversal(head);
    printf("\n");

    deleteval(head,3);         // Deletion of value   CASE 4
    printf("After deleting 3: ");
    traversal(head);
    printf("\n");
    return 0;
}
