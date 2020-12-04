#include<stdio.h>
void main()
{
int a[10],n,p,i;
float sum=0.0,mean,variance,sum1=0.0;
printf("Enter no. of Elements:");
scanf("%d",&n);
printf("Enter Elments:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
sum=sum+a[i];
mean=sum/n;
for(i=0;i<n;i++)
{sum1=sum1+(mean-a[i])*(mean-a[i]);}
variance=sum1/n;
printf("Mean=%f\tVariance=%f",mean,variance);
}

