#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int n)
{
   for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
}
int sortedInsertion(int *arr,int index, int size, int n,int capacity)
{
   if (size==capacity) return -1;
   for (int i=size; i>index; i--)
    {
       arr[i]=arr[i-1];
    }
   arr[index]=n;
   size++;
   return 1;
}
int main()
{
    int arr[100]={1,2,3,4,5};
    int size=4;
    int element=6;
    if (sortedInsertion(&arr, 3, size, element, 100)) {printf("\nInsertion successfull"); size++;}
    else {printf("\nInsertion failed");}
    display(&arr, 5);
    return 0;
}
