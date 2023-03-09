#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
void traversal(struct node* top)
{
while(top->next!=NULL){
    printf("%d ",top->data);
    top=top->next;
}
    printf("%d ",top->data);
}
struct node *create(struct node* bottom)
{
struct node *top=(struct node*)malloc(sizeof(struct node));
printf("Enter data : ");
scanf("\n%d",&top->data);
top->next=bottom;
printf("Continue to update? : ");
char c;
scanf("\n%c", &c);
if(c=='y'){create(top);}
else {return top;}

}
int peek(int pos, struct node* top)
{
int i=0;
while(i<pos-1){
    if (top->next==NULL){printf("Invalid position"); return -1;}
    top=top->next;
    i++;}
return top->data;
}
int main()
{
    struct node *bottom =(struct node*)malloc(sizeof(struct node));
    bottom->data=0;
    bottom->next=NULL;

    struct node* top=create(bottom);
    create(bottom);
    traversal(top);

    int second=peek(2,top);
    printf("\n%d",second);
    return 0;
}
