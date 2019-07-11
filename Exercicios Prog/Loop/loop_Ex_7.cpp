#include <stdio.h>
#include <time.h>


int main(void)
{
srand(time(NULL));
int i,r;
i = 0;

    while (i <= 10) {
        r = rand() % 5;
        printf("%d \n", r);
        if (r == 3) {
            break;
        }
        i++;
    }
return 0;
}