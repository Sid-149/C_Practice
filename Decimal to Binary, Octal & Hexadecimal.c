#include<stdio.h>
void main()
{
int B[10],O[10],H[10],n,l,k,i,a,m,c=65;
printf("1.To convert DECIMAL to BINARY\n2.To convert DECIMAL to OCTAL\n3.To convert DECIMAL to HEXADECIMAL");
while(1)
{
printf("\nEnter Choice:");
scanf("%d",&n);
switch(n)
{
case 1: l=0;
	printf("Enter DECIMAL no.:");
	scanf("%d",&k);
	while(k!=0)
	{B[l]=k%2;
	k=k/2;
	l++;
	}
	for(i=l-1;i>=0;i--)
	printf("%d",B[i]);
	break;
case 2: l=0;
	printf("Enter DECIMAL no.:");
	scanf("%d",&a);
	while(a!=0)
	{O[l]=a%8;
	a=a/8;
	l++;
	}
	for(i=l-1;i>=0;i--)
	printf("%d",O[i]);
	break;
case 3: l=0;
	printf("Enter DECIMAL no.:");
	scanf("%d",&m);
	while(m!=0)
	{H[l]=m%16;
	m=m/16;
	l++;
	}
	for(i=l-1;i>=0;i--)
	{if (H[i]>=10)
	{c=c+H[i]-10;
	printf("%c",c);
	}
	else
	{
	printf("%d",H[i]);
	}
	}
	break;
default :printf("INVALID INPUT!!!!");
}
}
}
