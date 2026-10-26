#include<stdio.h>
int main ()
{
     int a,b,c,d,e,sum;
     float avg;
     printf("Enter the subject marks a,b,c,d,e:");
     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
     sum=a+b+c+d+e;
     printf("\nThe total marks of 5 subjects is %d",sum);
     avg=sum/5.0;
     printf("\nThe average marks of 5 subject is %.2f",avg);
     return 0;
 }    