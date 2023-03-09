#include <stdio.h>
#include <stdlib.h>
struct stack {
int size;
int top;
int *arr;
};
int isempty(struct stack* mystack){ if (mystack->top==-1) return 1; return 0;}
int isfull(struct stack* mystack){if(mystack->top==mystack->size-1)return 1; return 0;}
void push(struct stack* s, int data){
if (isfull(s)){printf("Stack overflow"); return ;}
s->top++;
s->arr[s->top]=data;
}
int pop(struct stack* s){
if (isempty(s)){printf("Stack underflow"); return ;}
s->top--;
return s->arr[s->top+1];
}
void continouspush(struct stack* s){
if (isfull(s)){printf("Stack overflow");}
s->top++;
printf("Enter data: ");
scanf("%d", &s->arr[s->top]);
printf("Continue to push? ");
char c;
scanf("\n%c", &c);
if (c=='y'){continouspush(s); }
}
void continouspop(struct stack* s){
if (isempty(s)){printf("Stack underflow");}
s->top--;
printf("%d ", s->arr[s->top+1]);
printf("\nContinue to pop? ");
char c;
scanf("\n%c",&c);
if (c=='y'){continouspop(s);}
}
void traversal(struct stack* s)
{ for (int i=0;i<=s->top; i++){printf("%d ", s->arr[i]);} }
int peek(struct stack* s, int pos)
{ if (s->top-pos+1<0){printf("Invalid position"); return NULL;}
 return s->arr[s->top-pos+1];}
int  stacktop(struct stack* s){
if (isempty(s)){printf("Stack is empty.");return ;}
return s->arr[s->top];
}
int stackbottom(struct stack*){
if (isempty(s)){printf("Stack is empty.");return ;}
return s->arr[0];
}
int main()
{
    struct stack* mystack=(struct stack*)malloc(sizeof(struct stack));
    mystack->size=10;
    mystack->top=-1;
    mystack->arr=(int*)malloc(sizeof(mystack->size*sizeof(int)));

    continouspush(mystack);
    continouspop(mystack);
    traversal(mystack);

    int a=peek(mystack,2);
    printf("\n%d",a);

    return 0;
}

