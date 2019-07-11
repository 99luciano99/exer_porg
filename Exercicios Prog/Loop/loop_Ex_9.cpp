#include <stdio.h>
#include <time.h>

int main(void) {
int i,j,k;
k=10;
for(i=0;i<=10;i++)
{
  printf("%d ",i);
    for(j=k;j>=0;j--)
        {
        printf("%d ",j);
        break;
        }
        k--;
}
return 0;
}