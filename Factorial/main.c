#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, contador=1, factorial=1;
    printf("Introduce un numero:");
    scanf("%d",&numero);
    while(contador<=numero)
    {
        factorial=factorial*contador;
        contador++;
        printf("Factorial vale% d\n,factorial");
    }
    return 0;
}
