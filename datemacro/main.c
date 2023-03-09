#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Date:");
    printf(__DATE__);
    printf("\n");
    printf("Time:");
    printf(__TIME__);


    return 0;
}
