#include<stdio.h>
int main()
{
    float units, bill;
    printf("Enter units : ");
    scanf("%f",&units);
    if(units <= 100)
    {
        bill = units * 1.50;
    }
    else if(units <= 200)
    {
        bill = units * 2.50;
    }
    else if(units <= 500)
    {
        bill = units * 4.00;
    }
    else
    {
        bill = units * 6.00;
    }
    printf("\nTotal Bill = Rs. %.2f", bill);
    
    return 0;
}