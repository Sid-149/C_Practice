#include<stdio.h>
void recurse(int);
void main()
{
int count;
recurse(1);
}
void recurse(int count)
{printf("%d",count);
if(count<10)
recurse(count+1);
printf("%d",count);
}

