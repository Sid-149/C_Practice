#include<stdio.h>
int fact(int);
void main()
{
int n,r,ncr;
printf("Enter n and r:");
scanf("%d %d",&n,&r);
ncr=(fact(n))/(fact(r)*fact(n-r));
printf("ncr=%d",ncr);
}
int fact(int a)
{
int i,f=1;
for(i=1;i<=a;i++)
{f=f*i;}
return f;
}
