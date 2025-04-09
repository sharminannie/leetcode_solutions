#include<stdio.h>
int main()
{
   int a,b,c, maior,maiorAB;
   scanf("%d %d %d",&a,&b,&c);

   maior=(a+b+abs(a-b)) /2;
   maiorAB=(c+maior+abs(c-maior)) /2;

   printf("%d eh o maior\n", maiorAB);
return 0;
}

