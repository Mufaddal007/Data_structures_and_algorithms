#include <stdio.h>
#include <stdlib.h>
struct node
{
 int data;
  struct node *previous, *next;
};
struct node* create()
{
struct node* head=(struct node* )malloc(sizeof(struct node));
struct node* first=(struct node*) malloc(sizeof(struct node));
struct node* second=(struct node*)malloc(sizeof(struct node));
struct node* third=(struct node*)malloc(sizeof(struct node));
struct node* fourth=(struct node*)malloc(sizeof(struct node));
struct node* fifth=(struct node*)malloc(sizeof(struct node));
struct node* sixth=(struct node*)malloc(sizeof(struct node));
struct node* seventh=(struct node*)malloc(sizeof(struct node));

head->data=0;
head->next=first;
head->previous=NULL;

first->data=1;
first->next=second;
first->previous=head;


second->data=2;
second->next=third;
second->previous=first;

third->data=3;
third->next=fourth;
third->previous=second;

fourth->data=4;
fourth->next=fifth;
fourth->previous=third;

fifth->data=5;
fifth->next=sixth;
fifth->previous=fourth;

sixth->data=6;
sixth->next=seventh;
sixth->previous=fifth;

seventh->data=7;
seventh->next=NULL;
seventh->previous=sixth;

return head;
}
void update(struct node* ptr)
{
    struct node* mynode=(struct node*)malloc(sizeof(struct node));
    mynode->previous=ptr;
    ptr->next=mynode;
    printf("Enter data: ");
    scanf("%d",&mynode->data);
    printf("Continue to update? ");
    char c;
    scanf("\n%c",&c);
    if (c=='y') update(mynode);
    else mynode->next=NULL;

}
void traversal(struct node* ptr)
{
    printf("Forward Direction: ");
while(ptr->next!=NULL)
    {
    printf("%d ",ptr->data);
    ptr=ptr->next;
    }
    printf("%d\n",ptr->data);
    printf("Reverse Direction: ");
    while(ptr->previous!=NULL){
        printf("%d ", ptr->data);
        ptr=ptr->previous;
    }
    printf("%d\n", ptr->data);
}

struct node* getlastnode(struct node* ptr)
{ do ptr=ptr->next; while(ptr->next!=NULL); return ptr; }

int main()
{
    struct node* head;
    head=create();
    traversal(head);

    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr=getlastnode(head);
    update(ptr);
    traversal(head);

    return 0;
}
