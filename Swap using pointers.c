#include<stdio.h>
void swap(int *,int *);
void main()
{
int a,b;
printf("Enter two values:\n");
scanf("%d %d",&a,&b);
printf("Before Swapping:a=%d b=%d\n",a,b);
swap(&a,&b);
}
void swap(int *a,int *b)
{int temp;
temp=*a;
*a=*b;
*b=temp;
printf("After Swapping:a=%d b=%d",*a,*b);
}

