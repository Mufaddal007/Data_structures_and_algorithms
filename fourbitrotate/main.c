#include <stdio.h>
#include <stdlib.h>
void leftrotate(short i, char nib1[],short n)
{
 if (!i){   char nib[]="0000";
            for(int i=0;i<4;i++){nib[i]=nib1[i];}

            char temp[]="0000";
            for (int i=0;i<4;i++) temp[i]=nib[i];
            for (int i=0;i<4;i++) nib[i]=temp[(i+n)%4];
            printf("1 time Left rotation by %d bit:   %s\n",n,nib);
        }
else{
    char nib[]="00000000";
    for(int i=0;i<8;i++){nib[i]=nib1[i];}

    char temp[]="00000000";
    for (int i=0;i<8;i++) temp[i]=nib[i];
    for (int i=0;i<8;i++) nib[i]=temp[(i+n)%8];
    printf("1 time Left rotation by %d bit:   %s\n",n,nib);
    }
}
void rightrotate(short i, char nib1[],short n)

{
    if(!i){
            char nib[]="0000";
            for(int i=0;i<4;i++){nib[i]=nib1[i];}
            char temp[]="0000";
            for (int i=0;i<4;i++) temp[i]=nib[i];
            for (int i=0;i<4;i++) nib[(i+n)%4]=temp[i];
            printf("1 time Right rotation by %d bit:  %s\n",n,nib);
         }
    else{
        char nib[]="00000000";
        for(int i=0;i<8;i++){nib[i]=nib1[i];}

        char temp[]="00000000";
        for (int i=0;i<8;i++) temp[i]=nib[i];
        for (int i=0;i<8;i++) nib[(i+n)%8]=temp[i];
        printf("1 time Right rotation by %d bit:  %s\n",n,nib);
    }

}

int main()
{
    char nib[]="0000";
    char byte[]="00000000";
    printf("What do you want to rotate? enter N for nibble and B for byte, also enter number of bytes: input format should be like this: \nch n:");
    char ch;
    int n;
    scanf("\n%c %d",&ch,&n);
    if (ch=='N'){printf("Enter 4 bits: "); scanf("\n%c%c%c%c",&nib[0],&nib[1],&nib[2],&nib[3]); leftrotate(0,nib,n); rightrotate(0,nib,n);}
    else if (ch=='B') {printf("Enter 8 bits: ");
         scanf("\n%c%c%c%c%c%c%c%c",&byte[0],&byte[1],&byte[2],&byte[3],&byte[4],&byte[5],&byte[6],&byte[7]); leftrotate(1,byte,n); rightrotate(1,byte,n);}
    else printf("Invalid Input");

    return 0;
}
