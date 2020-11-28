#include<stdio.h>
void main()
{
int a[10][10],b[10][10],col,row,i,j;
printf("Enter order of matrix:");
scanf("%d",&row);
col=row;
printf("Enter elements in list:\n");
for(i=0;i<row;i++)
{for(j=0;j<col;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<row;i++)
{for(j=0;j<col;j++)
b[j][i]=a[i][j];
}
printf("Tranpose:\n");
for(i=0;i<row;i++)
{for(j=0;j<col;j++)
printf("%d\t",b[i][j]);
printf("\n");
}
}

