#include <stdio.h>
#include <stdlib.h>
#include "q1.h"

int main()
{
    int n;
    printf("Digite um tamanho n");

    scanf("%d", &n);

    int *v;

    v = inicializaVetor(n);

    for (int i = 2; i <= n; i++)
    {
        v[i - 2] = i;
    }

    ehmultiplo(v,n);
    ehPrimo(v,n);

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", v[i]);
    }

    free(v);

    return 0;
}