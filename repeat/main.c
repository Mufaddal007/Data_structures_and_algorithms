#include <stdio.h>
#include <stdlib.h>

int main()
{

int n=5;
    int a[]={2,2,2,2,2};
int b[n];
int j=0;
for (int i=0;i<n;i++)
{    int flag=0;
     for (int k=0;k<j;k++)
     {
        if (b[k]==a[i]) {flag=1;break;}
     }
     if (!flag){b[j]=a[i]; j++; }

}
for (int i=0;i<j;i++)
{
    printf("%d ",b[i] );
}
    return 0;
}
/*
void main()
{

}
*/
