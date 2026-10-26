#include<stdio.h>
int main()
{  
   int a,b,c,d,max1,max2,min1,min2;
   printf("Enter The values of a,b,c,d:");
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if(a>b)
      printf("\nmax1=a and min1=b");
   else
      printf("\nmax1=b and min1=a");  
   if(c>d)
      printf("\nmax2=c and min2=d");  
   else
      printf("\nmax2=d and min2=c"); 
   if(max1>max2)
      printf("\nmax1 is maximum");   
   else
      printf("\nmax2 is maximum");
   if(min1>min2)
      printf("\nmin2 is minimum");
   else
      printf("\nmin1 is minimum"); 
  return 0;         
 }        
        