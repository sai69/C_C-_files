#include<stdio.h>
#include<conio.h>
void main()
{
int area,l,b,perimeter;
printf("Enter the length value\n");
scanf("%d",&l);
printf("Enter the breadth value\n");
scanf("%d",&b);
area= l * b ;
perimeter= 2*l+2*b;
printf("Perimeter of the rectangle is %d\n",perimeter);
printf("Area of the circle is %d",area);
getch();
}