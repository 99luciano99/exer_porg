#include <stdio.h>
#include <math.h>

int main(void) {

int a,b, aux;
printf("Escreva um numero: ");
scanf("%d", &a);
printf("A soma dos algarismos do numero %d e: ",a);

b=1;
aux=0;

while(a!=0)
{
  b=b*10;
  aux=aux+(a%b)/(b/10);
  a=a-(a%b);
}
printf("%d \n", aux);
return 0;
}