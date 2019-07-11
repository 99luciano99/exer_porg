#include <stdio.h>
#include <time.h>


int main(void)
{

int i,j,aux;
	for(i=1;i<=10;i++)
	{
    aux=1;
    for(j=1;j<=i;j++)
    {
      aux= aux * 2;
    }
    printf("%d \n",aux);

	}
return 0;
}