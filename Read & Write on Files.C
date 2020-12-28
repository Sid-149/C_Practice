#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{FILE  *fp;
int roll_no,t;
char name[20],t1[20];
clrscr();
fp=fopen("test.txt","w");
printf("Enter details:");
scanf("%d %s",&roll_no,name);
fprintf(fp,"%d\t%s",roll_no,name);
fclose(fp);
fp=fopen("test.txt","r");
fscanf(fp,"%d %s",&t,&t1);
printf("%d %s",t,t1);
fclose(fp);
getch();
}