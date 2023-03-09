#include <stdio.h>
#include <stdlib.h>

int main()
{
     int sub1, sub2, sub3, sub4, sub5;
     printf("Enter marks for 5 Sub.: ");
     scanf("%d %d %d %d %d",&sub1, &sub2,&sub3,&sub4,&sub5);
     int total= sub1+sub2+sub3+sub4+sub5;
     float per= (float)total/500;
     per=(float)per*100;
     printf("\nTotal = %d",total);

     if (per>33) {printf("\nResult = Pass"); printf("\nPer = %.2f",per);}
     else { printf("\nResult = Fail");  printf("\nPer = -",per);}
     char ch;
     if (per>90) ch='A';
     else if (per<90 && per>=70) ch='B';
     else if (per<70 && per>=50) ch='C';
     else if (per<50 && per>=35) ch='D';

     printf("\nGrade = %c", ch);
    return 0;
}
