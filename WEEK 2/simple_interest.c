#include<stdio.h>

int main()
{
   float p,r,t,s;//p is principal amount,r is rate of interest,t is time
   printf("The value of principal amount,rate of interest,time:");
   scanf("%f%f%f",&p,&r,&t);
   s=p*r*t/100;
   printf("\nThe simple interest is %.2f",s);
   return 0;
}   