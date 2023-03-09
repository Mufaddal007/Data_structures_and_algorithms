#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* next;
};
int isempty(struct node* top){if(top==NULL) return 1; return 0;}
int isfull(struct node* top){
struct node* mynode=(struct node*)malloc(sizeof(struct node));
if (mynode==NULL) return 1; return 0;
}
struct node* push(struct node* top, int data){
if (isfull(top)){printf("Stack overflow"); return ;}
struct node* mynode=(struct node*)malloc(sizeof(struct node));
mynode->data=data;
mynode->next=top;
return mynode;
}
int pop(struct node** top, int data)
{
if (isempty(*top)){printf("Stack underflow");}
int a=(*top)->data;
struct node* mynode=*top;
(*top)=(*top)->next;
free(mynode);
return a;
}
void traversal(struct node* top){
while(top->next!=NULL){
    printf("%d ",top->data);
    top=top->next;
}
    printf("%d ",top->data);
}
int main()
{
    struct node* top=NULL;
    top=push(top,5);
    top=push(top,4);
    top=push(top,3);
    traversal(top);
    int a=pop(&pop);
    return 0;
}
