#include <stdio.h>
#include <stdlib.h>
void converttobin(int a)
{
char r[]="00000000";
int i=7;
while(a)
    {
    if(a%2==1) r[i]='1';
    else r[i]='0';
    a=(a-a%2)/2;
    i--;
    }
    printf("%s\n",r);
}
void rotateright(short k, int a, int b){
       if(!k){
        int c=((a>>b)|(a<<(4-b)))&0x0f;
        printf("1 left rotation of nibble by %d bits = %02d--> ",b,c);
        converttobin(c);}
      else {
        int c=((a>>b)|(a<<(8-b)))&0x00ff;
        printf("1 left rotation of byte by %d bits = %02d--> ",b,c);
        converttobin(c);
        }
}
void rotateleft(short k, int a, int b)
{
    if(!k){
        int c=((a<<b)|(a>>(4-b)))&0x0f;
        printf("1 right rotation of nibble by %d bits = %02d--> ",b,c);
        converttobin(c);}
    else {
        int c=((a<<b)|(a>>(8-b)))&0x00ff;
        printf("1 right  rotation of byte by %d bits = %02d--> ",b,c);
        converttobin(c);
    }

}
int main()
{
    while(1){
    int a,b,c;
    char ch;

    printf("What do you want to rotate? enter N for nibble and B for byte: ");
    scanf("%c",&ch);
    printf("Enter the number you want to rotate and enter the number of bits to rotate: ");
    scanf("%d %d", &a, &b);
    printf("%02d--> ",a);
    converttobin(a);
    if (ch=='B') {if (b>8) b=b%8; rotateright(1,a,b); rotateleft(1,a,b);}
    else if(ch=='N'){if (b>4) b=b%4; rotateright(0,a,b); rotateleft(0,a,b);}
    else printf("Invalid input");
    printf("\n");
    }

    return 0;
}
