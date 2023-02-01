#include<stdio.h>
#include<conio.h>
void main()
{
int num,n,a;
long int revnum=0;
clrscr();
printf("enter a five digit number(less than 32767)\n");
scanf("%d",&n);
num=n;
a=n%10;
n=n/10;
revnum=revnum+a*10000L;

a=n%10;
n=n/10;
revnum=revnum+a*1000;

a=n%10;
n=n/10;
revnum=revnum+a*100;

a=n%10;
n=n/10;
revnum=revnum+a*10;

a=n%10;
revnum=revnum+a;
printf("\nthe reversed number is %ld",revnum);

if(revnum==num)
printf(" the numbers are equal");
else
printf("\nthe numbers are not equal");
getch();

}
