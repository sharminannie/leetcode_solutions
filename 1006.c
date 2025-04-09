#include <stdio.h>
int main()
{

    double a,b,c,m;
    scanf("%lf %lf %lf",&a,&b,&c);

    m= (a/10*2) + (b/10*3)+ (c/10*5);
    printf("MEDIA = %.1lf\n",m);

    return 0;
}
