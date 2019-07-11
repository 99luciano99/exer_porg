#include <stdio.h>
#include <time.h>

int main(void) {
int i,j,aux,m,ver1,ver2,per;
int matriz [100][100];
per=0;
ver1=0;
printf("Entre com quantas linhas tera(maximo 100) a matriz quadrada: ");
scanf("%d",&m);
for(i=0;i<m;i++)
{
    for(j=0;j<m;j++)
        {
        printf("Entre com a posicao %d.%d: ",i+1,j+1);
        scanf("%d",&aux);
        matriz[i][j]= aux;
        }
}
for(i=0;i<m;i++)
{
    for(j=0;j<m;j++)
        {
        ver1= ver1 + matriz[i][j];
        ver2= ver2 + matriz[j][i];
        }
        if (ver1!=1 ||ver2!=1)
        {
          per=1;
        }
        ver1=0;
        ver2=0;
}

for(i=0;i<m;i++)
{
    for(j=0;j<m;j++)
        {
        printf("%d ",matriz [i][j] );
        matriz[i][j]= aux;
        }
        printf("\n");
}
if (per==1)
{
  printf("Essa nao e matriz de permutacoes");
}
else
{
  printf("Essa e uma matriz permutacoes");
}
return 0;
}
