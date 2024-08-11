#include <stdio.h>

int main()
{
    int N,i,j=0;
    scanf("%d", &N);
    
    for(i=0; i<1000; i++)
    {
        if(j>=N)
        {
            j=0;
        }
        printf("N[%d] = %d\n", i, j++);
    }
    return 0;
}
