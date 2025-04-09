#include<stdio.h>
int main()
{
    float R;
    double vol;
    scanf("%f",&R);
    vol = (4/3.0)* 3.14159 *R*R*R;
    printf("VOLUME = %.3lf\n",vol);
    return 0;
}
