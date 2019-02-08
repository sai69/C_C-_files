#include<stdio.h>
#include<conio.h>
void main()
{
int integer,hours,mins,secs;
 clrscr();
printf("Enter the integer(seconds)\n");
scanf("%d",&integer);
hours= integer/3600;
mins= (integer%3600)/60;
secs=(integer%3600)%60;
printf(" hours=%d mins=%d secs=%d\n",hours,mins,secs);
getch();
}