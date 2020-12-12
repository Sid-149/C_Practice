#include<stdio.h>
int matrix(int,int);
void main()
{
int a[100][100],b[100][100],m,n,p,c[100][100],d,e,k,i,j;
printf("Enter the number of rows and coloums");
scanf("%d %d",&m,&n);
printf("Enter the number of coloums for second matrix ");
scanf("%d",&p);
printf("Enter the values of first matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("Enter the values of second matrix");
for(i=0;i<n;i++)
{
for(j=0;j<p;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
d=a[i][k];
e=b[k][j];
c[i][j]+=matrix(d,e);
}
}
}
for(i=0;i<m;i++)
{
for(j=0;j<p;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
}
int matrix(int a,int b)
{
int sum=0;
sum=a*b;
return sum;
}
