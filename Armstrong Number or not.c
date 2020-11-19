#include<stdio.h>
void digit(int);
void main()
{
int n;
printf("Enter no.:");
scanf("%d",&n);
digit(n);
}
void digit(int n)
{
int d,r=0,t;
t=n;
while(n!=0)
{d=n%10;
n=n/10;
r=r+d*d*d;
}
if(t==r)
printf("Armstrong No.");
else
printf("Not Armstrong No.");
}
