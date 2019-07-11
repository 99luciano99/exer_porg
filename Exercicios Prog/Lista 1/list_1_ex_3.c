#include <stdio.h>
#include <time.h>

int main(void) {
float i;
printf("Escreva o valor da velocidade em quilômetros: ");
scanf("%f",&i);
printf("\n O valor de %.2f km por h e equivalente a   %.2f m por s",i,i/3.6);
return 0;
}