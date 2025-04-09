#include<stdio.h>
int main()
{
    double A,B,C;
    double tr,ci,tra,qua,re;

    scanf("%lf %lf %lf",&A,&B,&C);
    tr = (A*C)/2;
    ci = 3.14159*C*C;
    tra=((A+B)/2)*C;
    qua= B*B;
    re= A*B;

     printf("TRIANGULO: %.3lf\n", tr);
     printf("CIRCULO: %.3lf\n", ci);
     printf("TRAPEZIO: %.3lf\n", tra);
     printf("QUADRADO: %.3lf\n", qua);
     printf("RETANGULO: %.3lf\n", re);

    return 0;
}
