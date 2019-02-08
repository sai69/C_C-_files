#include<stdio.h>
#include<conio.h>
void main()
{
int num_days,years,weeks,days;
 clrscr();
printf("Enter the num_days\n");
scanf("%d",&num_days);
years= num_days/365;
weeks= (num_days%365)/7;
days=(num_days%365)%7;
printf(" years=%d weeks=%d days=%d\n",years,weeks,days);
getch();
}