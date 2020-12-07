#include<stdio.h>
int fact(int);
void main()
{
int n, factorial;
printf("Enter no.:");
scanf("%d",&n);
factorial=fact(n);
printf("%d",factorial);
}
int fact(int m)
{
if(m==1)
return 1;
else
return(m*fact(m-1));
}

