#include<stdio.h>
#include<conio.h>
void main()
{
char str[10],t;
int i,j;
printf("Enter the string:");
scanf("%d",&str);
for(i=0;i<strlen(str);i++)
{
for(j=i+1;j<strlen(str);j++)
{
if(str[i]>=str[j])
{
  t=str[i];
  str[i]=str[j];
  str[j]=t;
}
}
}
for(i=0;i<strlen(str);i++)
{
printf("%s",str[i]);
}
getch();
}