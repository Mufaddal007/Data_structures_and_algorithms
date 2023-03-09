#include <stdio.h>
#include <stdlib.h>
struct stack{
int top;
int size;
char *ch;
};

int isempty(struct stack* mystack){if(mystack->top==-1) return 1; else return 0;}
int isfull(struct stack* mystack){if(mystack->top+1==mystack->size) return 1; else return 0;}

void push(char c, struct stack *mystack)
{
  if(isfull(mystack)){printf("Stack is full!"); return ;}
  mystack->top++;
  mystack->ch[mystack->top]=c;
}

void pop(struct stack *mystack)
{
  if(isempty(mystack)){printf("Stack is empty!"); return ;}
  mystack->top--;
}

void traversal(struct stack *mystack)
{int i=0;
while(i<=mystack->top){printf("%c ",mystack->ch[mystack->top-i]); i++;}
}

int paramatch(char *c){
struct stack *mystack=(struct stack*)malloc(sizeof(struct stack));
mystack->top=-1;
mystack->size=20;
mystack->ch=(char*)malloc(mystack->size*sizeof(char));
for (int i=0;c[i]!='\0'; i++){

    if(c[i]=='(')
        {push('(',mystack);}
    else if (c[i]=='{')
        {push('{',mystack);}
    else if (c[i]=='[')
        {push('[',mystack);}

    else if(c[i]==')'){
            if(*mystack->ch=='('){
                        if(isempty(mystack)) return 0;
                        pop(mystack);}
            else return 0;}
    else if(c[i]=='}'){
            if(*mystack->ch=='}'){
                        if(isempty(mystack)) return 0;
                        pop(mystack);}
            else return 0;}
    else if(c[i]==']'){
            if(*mystack->ch==']'){
                        if(isempty(mystack)) return 0;
                        pop(mystack);}
            else return 0;}
}
if(mystack->top>=0) return 0;
return 1;
}
int main()
{
    char *c="8*3*((4+3))";
    if (paramatch(c)){printf("Valid parenthesis expression");}
    else printf("Invalid parenthesis expression");
    return 0;
}
