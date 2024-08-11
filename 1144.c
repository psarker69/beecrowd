#include <stdio.h>
 
int main() {
 
   int n,i,j,k,l,m;
   
   scanf("%d", &n);
   
   for(i=1;i<=n;i++) {
       j=i*i;
       k=i*i*i;
       printf("%d %d %d\n", i,j,k);
       l=j+1;
       m=k+1;
       printf("%d %d %d\n", i,l,m);
    }
   return 0;
}