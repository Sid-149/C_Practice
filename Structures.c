#include<stdio.h>
struct student
{char name[20];
int roll_no;
float fees;
};
void main()
{struct student s[10];
int i,n;
printf("No. of Students<=10:");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s\n%d\n%f",s[i].name,&s[i].roll_no,&s[i].fees);}
printf("Name\tRoll_No\tFees\n");
for(i=0;i<n;i++)
{printf("%s\t%d\t%f\n",s[i].name,s[i].roll_no,s[i].fees);}
}

