#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <float.h>

void main()
{
int a=-10;
unsigned int b=20;
short int c=-12000;
unsigned short int d=700;
long int e=-76321;
unsigned long int f=802020;
char g='k';
unsigned char h='H';
float i=600.50;
double j=65665.783;
long double k=200000.326;
clrscr();
printf("%d,%u,%d,%u,%d,%u\n",a,b,c,d,e,f);
printf("%c,%c\n",g,h);
printf("%0.2f,%0.3lf,%0.3Lf\n",i,j,k);
printf("size of date types in bytes: \n int =%d\n  unsignedint = %d\n short int =%d\n unsigned short int= %d\n long int=%d\n unsigned long int=%d\n char =%d\n unsigned char= %d \n float=%d \n double=%d \n long double= %d \n",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f),sizeof(g),sizeof(h),sizeof(i),sizeof(j),sizeof(k));
printf("range of int %d %d \n",INT_MIN,INT_MAX);
printf("range of unsigned int 0  %u \n",UINT_MAX);
printf("range of short %d %u \n",SHRT_MIN,SHRT_MAX);
printf("range of unsigned short int 0  %u \n",USHRT_MAX);
printf("range of long %d %u \n",LONG_MIN,LONG_MAX);
printf("range of unsigned long 0 %ld \n",ULONG_MAX);
printf("range of char %d %u \n",CHAR_MIN,CHAR_MAX);
printf("range of unsigned char 0 %u :\n",UCHAR_MAX);
printf("range of float %lg %Lf :\n",FLT_MIN,FLT_MAX);
printf("range of double %lg %llg :\n",DBL_MIN,DBL_MAX);
getch();
}
