#include<stdio.h>
int main()
{
    int a,b,c,choice;//1 for addition,2 for subtraction,3 for multiplication,4 for division
    printf("Enter The values of a,b and choice:");
    scanf("%d%d%d",&a,&b,&choice);
    switch(choice) {
    case 1:
      c=a+b;
      printf("\nThe sum of a and b is %d",c);
      break;
    case 2:
       c=a-b;
       printf("\nThe subtraction of a and b is %d",c);  
       break;
    case 3:
       c=a*b;
       printf("\nThe multiplication of a and b is %d",c);
       break;
    case 4:
       if(b==0)
          printf("\nDivision by zero is not possible");
       else
          c=a/b;
          printf("\nThe division of a and b is %d",c);
    break;      
    default:
        printf("\nInvalid option");  }  
    return 0;     
 }        
        