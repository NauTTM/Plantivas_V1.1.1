#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;

    for(i=10;i<=100;i=i+1)
    {
       if(i%7==0)
       {
           printf("El numero %d es multiplo de 7\n",i);
       }
    }

    return 0;
}
