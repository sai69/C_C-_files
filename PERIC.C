#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float perimeter,area,r;
clrscr();
printf("Enter the radius\n");
scanf("%f",&r);
perimeter= 2*(22/7)*r;
area=(22/7)*r*r;
printf("Perimeter of circle is %f\n",perimeter);
printf("Area of circle is %f",area);
getch();
}