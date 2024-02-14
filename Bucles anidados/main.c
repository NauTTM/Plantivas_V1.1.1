#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x;
    do
    {
        printf("Introduce un numero entero(si es distinto de 10 se saldra del bucle):");
        scanf("%d",&i);
        for(x=1;x<=10;x++)
        {
            printf("%d por %d es %d\n",x,i,x*i);
        }

    } while(i!=10);

return 0;
}
