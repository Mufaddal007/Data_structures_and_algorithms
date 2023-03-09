#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val,toupper,tolower,fromupper,fromlower;
    float ans;
    int one,two,three;
    printf("Enter values:\n");
    scanf("%d %d %d %d %d",&val,&fromlower,&fromupper,&tolower,&toupper);
    ans=tolower+(((val-fromlower)*(toupper-tolower))/(fromupper-fromlower));
    printf("your answer= %f",ans);
    return 0;
}
