#include<stdio.h>
void main()
{
int a[15][10],b[10][15],c[15][15],m,n,p,i,j,k;
printf("Enter m<=15(row) and n<=10(col):");
scanf("%d %d",&m,&n);
printf("Enter Matrix A:\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("Enter p<=15:");
scanf("%d",&p);
printf("Enter Matrix B:\n");
for(i=0;i<n;i++)
{for(j=0;j<p;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<m;i++)
{for(j=0;j<p;j++)
{c[i][j]=0;
for(k=0;k<n;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}}
printf("Multiplication of matrices:\n");
for(i=0;i<m;i++)
{for(j=0;j<p;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
}
