#include<stdio.h>
#include<conio.h>
void main()
{
int mileage,dist,fuel;
printf("Enter the distance\n");
scanf("%d",&dist);
printf("Enter the fuel\n");
scanf("%f",&fuel);
mileage=dist/fuel;
printf(" mileage is %f ",mileage);
getch();
}