#include <stdio.h>
#include <stdlib.h>

int main()
{

int x = 0;
int i, j;

for (i = 1; i < 10; i++)
   for (j = 1; j < 10; j++)
      x++;
printf("%d",x);
}
