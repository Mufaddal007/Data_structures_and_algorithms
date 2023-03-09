#include <stdio.h>
#include <stdlib.h>
int deletion(int* arr, int size, int index)
{
  for(int i=index;i<size-1; i++)
    { arr[i]=arr[i+1]; }
    arr[size-1]=NULL;
    return 1;
}
void display(int* arr, int size){ for (int i=0;i<size; i++) {printf("%d ", arr[i]);} }
int main()
{
    int arr[100]={1,2,3,4,5};
    int size=5;
    display(&arr, size);
    if (deletion(&arr, 5, 3)) size--;
    printf("\n");
    display(&arr, size);
    return 0;
}
