#include<stdio.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i=0,j=0;
clrscr();
gets(a);
gets(b);
while(a[i]!='\0')
i++;
while(b[j]!='\0')
{a[i]=b[j];
j++;
i++;
}
a[i]='\0';
puts(a);
getch();
}
