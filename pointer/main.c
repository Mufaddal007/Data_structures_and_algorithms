#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j=0;
   for (int i=0;i<4;i++)
    {
     printf("%d", ++j);
     printf("%d", j++);
    }

    return 0;
}
