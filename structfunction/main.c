#include <stdio.h>
#include <stdlib.h>
struct check{
int x;
int y;
void assign(int a, int b)
{
  this.x=a;
  this.y=b;
}
};
int main()
{
    struct check mycheck;
    mycheck.assign(1,2);
    printf("%d %d",mycheck.x,mycheck.y);

    return 0;
}
