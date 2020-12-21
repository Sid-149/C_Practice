#include<conio.h>
#include<stdio.h>
int sum (int);
void main()
{
int n,s;
clrscr();
printf("Enter a no.:");
scanf("%d",&n);
s=sum(n);
printf("Sum of the digits of the entered no.:%d",s);
getch();
}
int sum(int n)
{int d;
d=n%10;
n=n/10;
if(d==0)
return 0;
else return (d+sum(n));
}
