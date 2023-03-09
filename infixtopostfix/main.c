#include <stdio.h>
#include <stdlib.h>
struct stack{
int top;
int size;
char *ch;
};
int isoperator(char ch)
{
if(ch=='+' || ch=='-' || ch=='*' || ch=='/') return 1;
return 0;
}
int isfull(struct stack* mystack){
if (mystack->top+1==mystack->size) return 1;
return 0;}
int isempty(struct stack* mystack)
{
if(mystack->top==-1) return 1;
return 0;
}
void push(char ch, struct stack* mystack)
{
mystack->top++;
mystack->ch[mystack->top]=ch;
}

char pop(struct stack* mystack)
{
mystack->top--;
return mystack->ch[mystack->top+1];
}
int prec(char c){
if(c=='+') return 1;
else if(c=='-') return 1;
else if(c=='*') return 2;
else if(c=='/') return 2;
}
char *intopost(char *ch)
{
    struct stack* mystack=(struct stack*)malloc(sizeof(struct stack));
    mystack->size=20;
    mystack->top=-1;
    mystack->ch=(char*)malloc(mystack->size*sizeof(char));
    char *postfix=(char*)malloc((strlen(ch)+1)*sizeof(char));
    while(*ch)
        {
        if(!isoperator(*ch)){*postfix==*ch; postfix++;}
        else{
            if(prec(*ch)>prec(mystack->ch[mystack->top])){push(*ch,mystack);}
            else {*postfix=pop(mystack);postfix++;}
        }

        ch++;
        }
    while(!isempty(mystack)){*postfix=pop(mystack); postfix++;}
    printf("%s",*postfix);
    return postfix;
}
int main()
{   struct stack* mystack=(struct stack*) malloc(sizeof(struct stack));

    mystack->top=-1;
    mystack->size=10;
    mystack->ch=(char*)malloc(mystack->size*sizeof(char));
    push('M',mystack);
    push('U',mystack);
    push('F',mystack);
    push('F',mystack);
    push('I',mystack);

    printf("%c",pop(mystack));
    printf("%c",pop(mystack));
    printf("%c",pop(mystack));
    printf("%c",pop(mystack));
    printf("%c",pop(mystack));

    char *c="a-b+t/6";
    char *getpost=intopost(c);
    while(*getpost){printf("%c",getpost); getpost++;}
    return 0;
}
