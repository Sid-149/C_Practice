#include<stdio.h>

int main()
{
long int n,digit,reverse=0;
printf("Enter no.");
scanf("%ld",&n);
while(n!=0)
{
digit=n%10;
n=n/10;
reverse=(reverse*10)+digit;
}
printf("Reverse is: %ld",reverse);
return 0;
}
