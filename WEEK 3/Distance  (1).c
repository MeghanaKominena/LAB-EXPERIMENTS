#include<stdio.h>
int main ()
{
     float speed,time,distance;
     printf("The value of speed and time:");
     scanf("%f%f",&speed,&time);
     distance=speed*time;
     printf("The distance travelled by an object is %.2f",distance);
     return 0;
 }    