#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
   FILE *f;
   f=fopen("test.txt","w+");
   int j,k;
   scanf("%d %d",&j,&k);
   char str1[20];

   sprintf(str1, "This is %d's table",j);
   fputs(str1,f);
   printf("Check your text file for output");
   putc('\n',f);
   char str[20];
   for(int i=1;i<k+1;i++)
    {
     sprintf(str, "%2d  *  %2d  =  %4d\n",j,i,j*i); //string formatting
     fputs(str,f);
    }

    return 0;
}
