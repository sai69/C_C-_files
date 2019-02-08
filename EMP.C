#include <stdio.h>
#include <conio.h>
void main()
{
int h,p,emp_id,sal;
clrscr();

printf("enter employee id:\n");
scanf("%s",&emp_id);

printf("Enter hours per month\n");
scanf("%d",&h);

printf("Enter price per hour\n");
scanf("%d",&p);

sal=h*p;
printf("salary of %s is  %d ",sal);

getch();
}
