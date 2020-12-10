#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[10],rev[10];
int l=0,i=0,p;
clrscr();
printf("Enter a String: ");
scanf("%s",a);
while(a[l]!='\0')
l++;
for(i=0;i<=l-1;i++)
rev[l-i-1]=a[i];
printf("Reverse of String:%s\n",a);
p=1;
for(i=0;i<=l-1;i++)
{if(rev[i]!=a[i])
{p=0;
break;}
}
if(p==1)
printf("Palindrome");
else
printf("Not Palindrome");
getch();
}
