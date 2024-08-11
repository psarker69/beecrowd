#include<stdio.h>

int main()
{
    int n, x, rabbit=0, rat=0, frog=0, total, i;
    double p, q, r;
    char y[2];
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %s", &x, &y);
        if (y[0]=='C')
        {
            rabbit=rabbit+x;
        }

        else if (y[0]=='R')
        {
            rat=rat+x;
        }

        else if (y[0]=='S')
        {
            frog=frog+x;
        }
    }
    total=rabbit+rat+frog;
    p=(rabbit/(total*1.0))*100;
    q=(rat/(total*1.0))*100;
    r=(frog/(total*1.0))*100;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);
    printf("Percentual de coelhos: %.2lf %%\n",p);
    printf("Percentual de ratos: %.2lf %%\n",q);
    printf("Percentual de sapos: %.2lf %%\n",r);

    return 0;
}
