#include<stdio.h>
#include<math.h>
int main ()
{
     float principal,rate,time,compound_interest,amount;
     printf("The value of principal amount,rate of interest,time:");
     scanf("%f%f%f",&principal,&rate,&time);
     amount=principal*pow((1+rate/100),time);
     compound_interest=amount-principal;
     printf("\nThe compound interest is %.2f",compound_interest);
     return 0;
 }    