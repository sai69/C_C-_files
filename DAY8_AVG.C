#include <stdio.h>
#include <conio.h>
void main()
{
int w1,w2,a,c1,c2;
clrscr();

printf("enter the weight\n");
scanf("%d%d",&w1,&w2);

printf("Enter cost\n");
scanf("%d%d",&c1,&c2);

a=((w1*c1)+(w2*c2))/(c1+c2);
printf("Average %d",a);

getch();
}
