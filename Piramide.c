#include <stdio.h>

int main() { int numero; int i, j;

    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;

}
