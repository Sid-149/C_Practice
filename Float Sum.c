#include<stdio.h>
float add(float,float);
void main()
{
float n1,n2,sum;
printf("Enter two nos.:");
scanf("%f %f",&n1,&n2);
sum=add(n1,n2);
printf("%f",sum);
}
float add(float a,float b)
{
float c;
c=a+b;
return c;
}
