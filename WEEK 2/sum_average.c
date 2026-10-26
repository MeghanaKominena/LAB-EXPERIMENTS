#include<stdio.h>
int main()
{
   float a,b,c,sum,average;
   printf("Enter the values of a,b,c:");
   scanf("%f%f%f",&a,&b,&c);
   sum=a+b+c;
   average=sum/3.0;
   printf("\nThe sum of 3 numbers is %.2f",sum);
   printf("\nThe average of 3 numbers is %.2f",average);
   return 0;
  }         
