#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <winbgim.h>

int main()
{
   initgraph(DETECT,DETECT, "Test");
   line(50,100,200,500);
   closegraph();
    printf("Hello world!\n");
    return 0;
}
