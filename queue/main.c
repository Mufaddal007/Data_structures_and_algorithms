#include <stdio.h>
#include <stdlib.h>
struct queue{
int pos;
int size;
int *arr;
};
void enqueue(int i,struct queue* myqueue)
{
if(myqueue->pos+1==myqueue->size){printf("Queue is full!"); return ;}
myqueue->pos++;
myqueue->arr[myqueue->pos]=i;
}
int dequeue(struct queue* myqueue)
{
if(myqueue->pos==-1) {printf("Queue is empty!"); return ;}
int i=0,j;
j=myqueue->arr[0];
while(i<myqueue->pos){myqueue->arr[i]=myqueue->arr[i+1]; i++;}
myqueue->pos--;
return j;
}

int first(struct queue* myqueue){return myqueue->arr[0];}
int last(struct queue* myqueue){return myqueue->arr[myqueue->pos];}


int main()
{
    struct queue* myqueue=(struct queue*)malloc(sizeof(struct queue));
    myqueue->pos=-1;
    myqueue->size=20;
    myqueue->arr=(char*)malloc(myqueue->size*sizeof(char));

    enqueue(0,myqueue);
    enqueue(1,myqueue);
    enqueue(2,myqueue);
    enqueue(3,myqueue);
    enqueue(4,myqueue);

    printf("%d ",dequeue(myqueue));
    printf("%d ",dequeue(myqueue));
    printf("%d ",dequeue(myqueue));
    printf("%d ",dequeue(myqueue));
    printf("%d ",dequeue(myqueue));

    return 0;
}
