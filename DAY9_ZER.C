#include<stdio.h>
#include<conio.h>

int count(int n)
{
int r,i=0;
while(n!=0)
{
 r=n%10;
 if(r==0)
 {
 i++;
 }
 n=n/10;
}
return i;
}
void main()
{
int p,i,fact=1,c;
printf("Enter the number \n");
scanf("%d",p);
for(i=1;i<=p;i++)
{
 c=c+count(fact*i);
}
printf("Number of zero's in factorial is:%d",c);
getch();
}