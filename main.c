#include <stdio.h>
typedef unsigned long DW;
typedef unsigned short w;
typedef unsigned char  Byte;

typedef union{
    DW dw[2];
    w w[4];
    Byte B[8];
}Entry;


int main(){
 Entry* a= malloc(sizeof(Entry));
 unsigned long i,j,k;
 int i=0;
 int j=0;
 int m=0;
 int x;

 int zz;
<<<<<<< Updated upstream
 int yy;
 int aa;
    
=======
 int bb;
>>>>>>> Stashed changes

 a->dw[0]=0xcfffffff;
 i = a->dw[0]>>16;
 j=  a->w[1];
 k=(a->B[3]<<8)+a->B[2];
 printf("i=%lu\n", i);
 printf("j=%lu\n", j);
 printf("k=%lu\n", k);
}
