#include<stdio.h>
#include<conio.h>

void main()
clrscr();
{
int n,i;
printf("Enter the value");
scanf("%d",&n);
printf("%d divisible by",n);
for(i=1;i<=11;i++)
{
if(n%i==0)
printf("%d ",i);
}
getch();
}