#include <stdio.h>
#include <time.h>

int main(void) {
int i,j,k,m;
printf("Entre com quantas linhas quer o triângulo de Floyd: ");
scanf("%d",&k);
m=1;
for(i=0;i<k;i++)
{
    for(j=0;j<=i;j++)
        {
        printf("%d ",m);
        m++;
        }
         printf("\n");
}
return 0;
}