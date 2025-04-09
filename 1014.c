#include<stdio.h>
int main()
{
   int X;
   float Y, avrg;
   scanf("%d %f",&X,&Y);
   avrg = X/Y;

   printf("%.3f km/l\n", avrg);
   return 0;

}
