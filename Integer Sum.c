#include<stdio.h>
int add(int,int);
void main()
{
int n1,n2,sum;
printf("Enter two nos.:");
scanf("%d %d",&n1,&n2);
sum=add(n1,n2);
printf("%d",sum);
}
int add(int a,int b)
{
int c;
c=a+b;
return c;
}
