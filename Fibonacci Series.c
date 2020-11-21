#include<stdio.h>

int main()
{
int a=0,b=1,c,n;
printf("Enter no. of terms:");
scanf("%d",&n);
printf("%d\n%d",a,b);
for(int i=1;i<=n-2;i++)
{
c=a+b;
printf("\n%d",c);
a=b;
b=c;
}
return 0;
}
