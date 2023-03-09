#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node* next;
};
void update(struct node *ptr)
{
   printf("Enter data of the node: ");
   scanf("%d", &ptr->data);
   char c;
   printf("Continue to update?: ");
   scanf("%c", &c);
   if (c=='y' | c=='Y')
   {ptr->next=(struct node *)malloc(sizeof(struct node)); update(ptr->next);}
   else return NULL;
}
void traversal(struct node* ptr){
while(ptr->next!=NULL)
    {
     printf("%d ",ptr->data);
     ptr=ptr->next;
    }
}
void insert(int index,struct node *ptr)
{
     int i=0;
     while(i<index)
     {
      ptr=ptr->next;
      i++;
     }
     ptr->next=subject;
     subject->next=ptr->next;

}
int main()
{
    struct node *head=(struct node* )malloc(sizeof(struct node));
    head->data=5;
    head->next=(struct node*)malloc(sizeof(struct node));
    update(head->next);
    struct node *toinsert=(struct node*)malloc(sizeof(struct node));
    toinsert->data=100;
    insert(toinsert, head);
    traversal(head);

    return 0;
}
