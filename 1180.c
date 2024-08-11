#include<stdio.h>

main ()
{
    int N, x[1000], i, small=0, position;
    scanf("%d", &N);
    if(1<N<1000)
    {
        for(i=0; i<N; i++)
    {
        scanf("%d", &x[i]);
        if(small>x[i])
        {
            small=x[i];
            position=i;
        }
    }

    }

printf("Menor valor: %d\n", small);
printf("Posicao: %d\n", position);

    return 0;
}
