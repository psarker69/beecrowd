#include<stdio.h>

int main()
{
    int i, y;
    float a, sum=0;
again:
    for(i=1; i<=2; i++)
    {
check:
        scanf("%f", &a);
        if(a>=0 && a<=10)
        {
            sum=sum+a;
        }
        else
        {
            printf("nota invalida\n");
            goto check;
        }
    }

    printf("media = %.2f\n", sum/2);
    sum=0;
    while(1)
    {
new1:
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &y);
        if(y==1)
        {
            goto again;
        }
        else if(y==2)
        {
            break;
        }
        else
        {
           goto new1;
        }
    }


    return 0;
}
