#include<stdio.h>
void add(int,int);
void main()
{
int n1,n2;
printf("Enter two nos.:");
scanf("%d %d",&n1,&n2);
add(n1,n2);
}
void add(int a,int b)
{
int c;
c=a+b;
printf("%d",c);
}
