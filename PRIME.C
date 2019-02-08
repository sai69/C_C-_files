#include <stdio.h>
#include <conio.h>
void main()
{
int i,n,count,p;
clrscr();
printf("enter the number:");
scanf("%d",&p);
for(n=1;n<=p;n++)
{
count=0;
for (i=1;i<=n;i++)
{
if(n%i==0)
count++;
}
if (count==2)
{
printf("\n %d ",n);
}
}

getch();
}
