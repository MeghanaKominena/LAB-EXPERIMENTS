#include<stdio.h>
#include<math.h>
int main ()
{
     int a,b,c;
     float s,area;
     printf("Enter the values of a,b,c:");
     scanf("%d%d%d",&a,&b,&c);
     s=(a+b+c)/2.0;
     area=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("The area of triangle is %.2f",area);
     return 0;
 }    