#include<stdio.h>

int main()
{
    int i;
    float a, sum=0;

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

    return 0;
}
