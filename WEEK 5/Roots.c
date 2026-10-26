#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,root1,root2,real,imag;
    printf("Enter coefficients a, b, c: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a == 0)
    {
        printf("Not a quadratic equation (a cannot be 0)");
        return 0;
    }
    d = b*b - 4*a*c;  // discriminant
    if(d > 0)
    {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("\nRoots are real and distinct");
        printf("\nRoot1=%.2f", root1);
        printf("\nRoot2=%.2f", root2);
    }
    else if(d == 0)
    {
        root1 = -b / (2*a);
        printf("\nRoots are real and equal");
        printf("\nRoot1=Root2=%.2f", root1);
    }
    else
    {
        real = -b / (2*a);
        imag = sqrt(-d) / (2*a);
        printf("\nRoots are complex and imaginary");
        printf("\nRoot1=%.2f+%.2fi",real,imag);
        printf("\nRoot2=%.2f-%.2fi",real,imag); }
    return 0;
 }    