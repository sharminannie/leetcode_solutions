#include<stdio.h>
int main()
{
 int num,hours;
 float amt,salary;
 scanf("%d %d %f",&num,&hours,&amt);
 salary=hours*amt;
 printf("NUMBER = %d\n",num);
 printf("SALARY = U$ %.2f\n",salary);
 return 0;
}
