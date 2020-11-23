#include<stdio.h>
int gcd(int,int);
void main()
{
int m,n;
printf("Enter two nos.:");
scanf("%d%d",&m,&n);
printf("GCD of %d and %d is %d",m,n,gcd(m,n));
}
int gcd(int a,int b)
{
int rem;
rem=a%b;
if(rem==0)
return b;
else 
gcd(b,rem);
}
