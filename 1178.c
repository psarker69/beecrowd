#include <stdio.h>

int main()
{
    int i=0;
    double X, N[100];

    scanf("%lf", &X);
    N[i]=X;

    printf("N[%d] = %.4lf\n", i, N[i]);
    N[1]=N[0];

    for(i=1; i<100; i++)
    {
        N[i]=N[i-1]/2;
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
    return 0;
}
