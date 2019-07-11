#include <stdio.h>

int main(void) {
int a,b;  
printf("Escreva o valor de a: ");
scanf("%d",&a);
printf("\nEscreva o valor de b: ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nO valor de a: %i",a);
printf("\nO valor de b: %i",b);
return 0;
}