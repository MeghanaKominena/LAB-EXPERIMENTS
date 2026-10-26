#include<stdio.h>
int main()
{ 
    float f,c;
    int choice;
    printf("1.Fahrenheit to Celsius");
    printf("\n2.Celsius to Fahrenheit");
    printf("\nEnter choice");
    scanf("%d",&choice);
    if(choice==1) {
       printf("\nEnter temperature in Fahrenheit:");
       scanf("%f",&f);
       c=(f-32)*5.0/9.0;
       printf("Celsius=%.2f\n",c);}
    else if(choice==2)
     { printf("\nEnter temperature in Celsius:");
      scanf("%f",&c);
      f=(c*9.0/5.0)+32;
      printf("Fahrenheit=%.2f\n",f); }
    else
      { printf("Invalid");  }
    
    return 0;
 }   