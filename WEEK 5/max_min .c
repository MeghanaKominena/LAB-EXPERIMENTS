#include<stdio.h>
int main()
{
    int a,b,c,d,max1,max2,min1,min2,max,min;
    printf("Enter four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
        max1=a;
    else
        max1=b;
    if(c>d)
        max2=c;
    else
        max2=d;
    if(max1>max2)
        max=max1;
    else
        max=max2;
    if(a<b)
        min1=a;
    else
        min1=b;
    if(c<d)
        min2=c;
    else
        min2=d;
    if(min1<min2)
        min=min1;
    else
        min=min2;
    printf("Maximum is %d\n",max);
    printf("Minimum is %d",min);
    return 0;
}