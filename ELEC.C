#include <stdio.h>
#include <conio.h>
void main()
{
int i,n,u,opt;
clrscr();
printf("enter the cust_id\n");
scanf("%d",&i);
printf("enter name\n");
scanf("%s",&n);
printf("if ur units= <200 press 1\n units>=200 & <400 press 2\n units>=400 & <=600 press 3\n units >600 press 4 \n ");
scanf("%d",&opt);
switch(opt)
{

case 1:scanf("%d",&u); if(u<200);printf("your bill amount @1.2: %d",u*1.2); break;
case 2:scanf("%d",&u); if(u>=200&&u<400);printf("your bill amount @1.5: %d",u*1.5); break;
case 3:scanf("%d",&u); if(u>=400&&u<=600);printf("your bill amount @1.8: %d",u*1.8);break;
case 4:scanf("%d",&u); if(u>600);printf("your bill amount @2: %d",u*2); break;

default:  printf("Invalid Choice");
break;
}
getch();
}
