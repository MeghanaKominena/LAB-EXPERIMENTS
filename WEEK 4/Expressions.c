#include<stdio.h>
int main()
{
    int A,B,C,D,E,F,G;
    int i,j;
    printf("Enter values for A,B,C,D,E,F,G: ");
    scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G);
    // a. A-B*C+(D*E)-F*G
    int result_a = A-B*C+(D*E)-F*G;
    printf("\na. A-B*C+(D*E)-F*G = %d", result_a);
    // b. A/B*C-B+A*D/3
    int result_b = A/B*C-B+A*D/3;
    printf("\nb. A/B*C-B+A*D/3 = %d", result_b);
    printf("\nEnter i value: ");
    scanf("%d",&i);
    // c. A++ + B-- - A  
    int result_c = A++ + B-- - A;
    printf("\nc. A++ + B-- - A = %d (A after=%d, B after=%d)", result_c, A, B);
    printf("\nEnter i for last expression: ");
    scanf("%d",&i);
    // d. J = (i++) + (++i)
    j = (i++) + (++i);
    printf("\nd. J=(i++)+(++i) = %d", j);
    printf("\ni after = %d", i);
    
    return 0;
}