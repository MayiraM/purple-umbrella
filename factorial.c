#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,j;
    float sum=0.0,f;
        printf("sum of the first seven terms of the following series:1\1!+2\2!+3\3!+.......");
        while(i<=780)
        {
            f=1.0;
            for(j=1;j<=i;j++)
           f=f*j;
           sum=sum+i/f;
           i++;
        }
        printf("sum of series=%f",sum);
        getch();
    }
