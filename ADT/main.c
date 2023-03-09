#include <stdio.h>
#include <stdlib.h>
void show();
void setval();
void createarray():
struct myarray
{
 int total_size, *base_adr,used_size;

};
void createarray(struct myarray* a,int tsize, int usize)
{
    (*a).total_size=tsize;
    (*a).used_size=usize;
    (*a).base_adr=(int*) malloc(tsize*sizeof(int));
}
void show(struct myarray *a)
{
   for (int i=0;i<(*a).used_size; i++)
    {
       printf("%d ", ((*a).base_adr)[i]);
    }
}
void setval(struct myarray* a)
{   int n;
    for (int i=0;i<(*a).used_size; i++)
        {

        printf("Enter an element: ");
        scanf("%d",&n);
       (*a).base_adr[i]=n;
        }
}
int main()
{
    struct myarray marks;
    createarray(&marks, 10, 5);
    setval(&marks);
    show(&marks);
    return 0;
}
