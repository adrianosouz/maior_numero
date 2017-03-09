#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

/*Vamos escrever um programa que recebe n numeros (n >= 1) e descobre qual deles e o maior.
O programa deve ter os seguintes passos:
1 Ler um numero n.
2 Repetir n vezes a leitura de um numero.
3 Determinar o maior numero.*/

int main()
{
    int  n, maior, x, i;
    printf("Digite uma quantidade de numeros\n");
    n = GetInt();

    printf("Digite os numeros\n");
    maior = GetInt();

    for(i = 1; i < n; i++)
    {
        printf("");
        x = GetInt();
        if(x > maior )
            maior = x;

    }
    printf("maior = %d\n", maior);
    return 0;
}

