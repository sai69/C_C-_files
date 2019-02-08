void main()
{
int price;
int h=0,f=0,t=0,ten=0;
clrscr();
printf("Enter the amount:");
scanf("%d",&price);

if(price>=100)
{
h=price/100;
price=price%100;
}
if(price<100 && price>=50)
{
f=price/50;
price=price%50;
}
if(price<50 && price>=20)
{
t=price/20;
price=price%20;
}
if(price<20 && price>=10)
{
ten=price/10;
price=price%10;
}
printf("100 =%d, 50 =%d, 20 =%d, 10 =%d ",h,f,t,ten);
getch();
}