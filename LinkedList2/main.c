#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
};
void linkedlisttraversal(struct node *ptr)
{
   while(ptr->next!=NULL)
    {
    printf("%d ",ptr->data);
    ptr=ptr->next;
    }
}
void createLinkedList(struct node *ptr)
{
    printf("Enter an integer to add to your linked list: ");
    scanf("%d",&(ptr->data));
    ptr->next=(struct node * )malloc(sizeof(struct node));
    char c;
    printf("Do you want to continue to update the Linked list? ");
    scanf("\n%c", &c);
    if (c=='y') {createLinkedList(ptr->next);}
    else {ptr->next=NULL;}

}
int main()
{
    struct node *head, *first, *second,*third;
    head=(struct node*) malloc(sizeof(struct node));
    createLinkedList(head);
    linkedlisttraversal(head);
    return 0;
}
