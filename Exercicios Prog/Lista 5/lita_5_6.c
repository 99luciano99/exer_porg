#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Min(int *vet, int m,int aux)
{ 

  if (m==0)
  {
    printf(" %d ",aux);
    return(aux); 
  }
  
    else
  {
    printf("\n %d ",aux);
    
    if(aux>vet[m-1])
    {
      aux=vet[m-1];
      m= m-1;
      aux= Min(vet,m,aux); 
    }
    else
	{
    m= m-1;
     aux= Min(vet,m,aux); 
     
    }  
  }
}
int main(void){
srand(time(NULL));
int* W;
int i,m,aux,l;

printf("Entre com o tamanho do vetor(valores seram gerados automaticamente): \n");
scanf("%d", &m);
aux=m;
W=(int *) malloc(m * sizeof (int));
for(i=0;i<m;i++){ 
	W[i]=rand()%10; //inserção dos valores no vetor.
	printf("%d ",W[i] ); //impressao dos valores contidos no vetor
}
aux=W[0];
l = Min(W,m,aux);
printf("%d ",l);
return 0;
}