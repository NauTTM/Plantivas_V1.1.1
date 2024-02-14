#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[100];
    int i;

    printf("Introduce una cadena de caracteres: ");

    gets(cadena);

    for(i=0;cadena[1]!='\0');
        printf("La cadena de caracteres es:%s\n",cadena);

    return 0;
}
