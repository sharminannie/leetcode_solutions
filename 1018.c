#include<stdio.h>
int main()
{
    int amt,n100,n50,n20,n10,n5,n2,n1;
    n100=n50=n20=n10=n5=n2=n1=0;

    scanf("%d",&amt);
    printf("%d\n",amt);

    if(amt>= 100){
        n100=amt/100;
        amt-= n100*100;
    }
     if(amt>=50){
        n50=amt/50;
        amt-= n50*50;
    }
     if(amt>=20){
        n20=amt/20;
        amt-=n20*20;
    }
     if(amt>=10){
        n10=amt/10;
        amt-=n10*10;
    }
     if(amt>=5){
        n5=amt/5;
        amt-=n5*5;
    }
     if(amt>=2){
        n2=amt/2;
        amt-=n2*2;
    }
     if(amt>=1){
        n1=amt;
    }
    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",n1);
    return 0;
}
