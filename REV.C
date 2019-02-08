#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i,j;
char t[5],a[5];
printf("Enter the string:");
gets(a);

j=strlen(a)-1;
for(i=0;a[i]!='\0';i++)
{
	t[i]=a[j];
	j--;

}
t[i]='\0';

puts(t);

getch();
return 0;
}
