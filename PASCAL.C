#include<stdio.h>
#include<conio.h>
void main()
{

int n=5;
int l,i;

for (l=1;l<=n;l++)
{
int c=1;
for (i=1;i<=l;i++)
{
printf("%d",c);
c=c*(l-i)/i;
}
printf("\n");
}
getch();
}