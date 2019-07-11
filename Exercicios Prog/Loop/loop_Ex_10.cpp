#include <stdio.h>
#include <time.h>

int main(void) {
int i,k,l,aux;
k=0;
l=1;
for(i=0;i<10;i++)
{
  printf("%d ",k);
  aux=l;
  l=l+k;
  k=aux;
}
return 0;
}