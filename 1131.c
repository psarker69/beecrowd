#include<stdio.h>

int main()
{
    int i, g, d=0, I=0, G=0, t=0, y;

    while(1)
    {
start:
        scanf("%d %d", &i, &g);
        t++;
        if(i>g)
        {
            I++;
        }
        if(i==g)
        {
            d++;
        }
        if(i<g)
        {
            G++;
        }
again:
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &y);
        if(y==1)
        {
            goto start;
        }
        if(y==2)
        {
            break;
        }
        else
        {
            goto again;
        }
    }
    printf("%d grenais\n", t);
    printf("Inter:%d\n", I);
    printf("Gremio:%d\n", G);
    printf("Empates:%d\n", d);

    if(I>G)
    {
        printf("Inter venceu mais\n");
           }
               else
           {
               printf("Gremio venceu mais\n");
    }
    return 0;
}
