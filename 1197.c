#include <stdio.h>
 
int main() {
 
int d, v, t;



while(scanf("%d",&v) != EOF)
{
    scanf("%d", &t);
    
    d = v*(2*t);
    printf("%d\n", d);
}
return 0;
}