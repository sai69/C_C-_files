#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int p,q;
printf("Enter values\n");
scanf("%d%d",&p,&q);
p=p^q;
q=p^q;
p=p^q;
printf("After swapping:%d %d",p,q);
getch();
}