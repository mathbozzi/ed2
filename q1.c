#include <stdio.h>
#include <stdlib.h>
#include "q1.h"

int *inicializaVetor(int n)
{
    int i = 0;
    int *vetor;

    vetor = malloc(n * sizeof(int));

    return vetor;
}

void ehmultiplo(int *v, int n){

    for (int i =0; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if (v[i] % j == 0)
            {
                v[i] = j;
            }
        }
    }
}

void ehPrimo(int *v, int n){

    for (int i =0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i] == v[j])
            {
                v[i] = v[j];
            }
        }
    }
}