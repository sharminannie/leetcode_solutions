
#include<stdio.h>
int main()
{
char name;
 double salary,sale,TOTAL;
 scanf("%s %lf %lf",&name,&salary,&sale);
 TOTAL = salary+sale*.15;
 printf("TOTAL = R$ %.2lf\n",TOTAL);
 return 0;
}
