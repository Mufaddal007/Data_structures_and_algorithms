#include <stdio.h>
#include <stdlib.h>
int linearsearch(int *arr, int size,int element)
{
   for (int i=0;i<size;i++)
    {
      if (arr[i]==element) return i;
    }
    return -1;
}
int binarysearch(int arr[], int size, int element)
{
    int mid,low=0, high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if (arr[mid]==element) return mid;
        else if (arr[mid]<element) low= mid+1;
        else if (arr[mid]>element) high= mid-1;
        }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,8,9};
    int size=sizeof(arr)/sizeof(int);
    int result=linearsearch(&arr, size, 4);
    if (result>=0) printf("%d ",result);
    else{printf("Not found");}
    result=binarysearch(&arr, size, 5);
    if (result==-1){printf("Not found");}
    else {printf("\n%d ", result);}

    return 0;
}
