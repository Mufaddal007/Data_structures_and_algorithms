#include <stdio.h>
#include <stdlib.h>
struct stack{
int size;
int top;
int *arr;
};
struct stack *create(){
    struct stack* mystack=(struct stack*)malloc(sizeof(struct stack));
    mystack->size=10;
    mystack->top=-1;
    mystack->arr=(int*)malloc(sizeof(mystack->size*sizeof(int)));
    push(mystack, 1);
    push(mystack, 2);
    push(mystack, 3);
    push(mystack, 4);
    push(mystack, 5);
    return mystack;
}
int isempty(struct stack *s)
{
  if (s->top==-1) return 1;
  return 0;
}
int isfull(struct stack *s)
{
  if(s->top==s->size-1) return 1;
  return 0;
}
void push(struct stack *s, int data){
if (isfull(s)){printf("Stack overflow"); return ;}
s->top++;
s->arr[s->top]=data;
}
void continouspush(struct stack *s)
{

if (isfull(s)){printf("Stack overflow"); return ;}
s->top++;
printf("Enter data: ");
scanf("\n%d", &(s->arr[s->top]));
printf("Continue to push? ");
char c;
scanf("\n%c",&c);
if (c=='y') continouspush(s);
}
void continouspop(struct stack *s){
if (isempty(s)) {printf("Stack underflow"); return ;}
s->top--;
printf("\n%d ",s->arr[s->top+1]);
printf("\nContinue to pop? ");
char c;
scanf("\n%c",&c);
if (c=='y') continouspop(s);
}
int pop(struct stack *s)
{
if (isempty(s)) {printf("Stack underflow"); return ;}
s->top--;
return s->arr[s->top+1];
}
void peek(struct stack* mystack, int pos )
{
if (mystack->top-pos+1<0) {printf("Invalid postition"); return -1;}
return mystack->arr[mystack->top-pos+1];
}
void stacktraversal (struct stack *s)
{
if (isempty(s)) {printf("Stack underflow"); return ;}
for (int i=0;i<s->top+1;i++)
{ printf("%d ",s->arr[i]); }
}
int main()
{   struct mystack *mystack;
    mystack=create();
    stacktraversal(mystack);
    printf("\n");
    continouspush(mystack);
    int a=pop(mystack);
    printf("%d ",a);

    a=pop(mystack);
    printf("%d ",a);

    printf("\n");
    continouspop(mystack);
    return 0;
}
