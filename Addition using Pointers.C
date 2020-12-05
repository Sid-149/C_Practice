#include<stdio.h>
#include<conio.h>
void main()
{int a[10],sum=0,*p,i,n;
clrscr();
p=&a;
printf("Enter no. of Elements<=10:");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",p+i);
for(i=0;i<n;i++)
sum=sum+(*(p+i));
printf("Sum=%d",sum);
getch();
}

