#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Escribe un numero entero por teclado:");
    scanf("%d", &x);

    if(x>=0 && x<=25)
        printf("Numero pequeño\n");
    else if(x>=50 && x<=75)
        printf("Numero mediado\n");
    else
    {
        printf("Numero grande\n");
    }
    return 0;
}
