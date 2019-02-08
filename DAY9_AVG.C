#include<stdio.h>
#include<conio.h>
void main()
{
 int A,B,t1=5+1,t2=5-1;
 int dis,sp,time;
 clrscr();
 printf("Enter A and B speed:\n");
 scanf("%d%d",&A,&B);
 sp=A+B;
 time=t1+t2;
 dis=sp*time;
 printf("%d",dis);
 getch();
}