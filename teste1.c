/*
    Escreva um programa que leia o nome completo de um aluno e suas 4 notas de matemática.
    O programa deverá calcular a média das notas e por fim imprimir na tela o nome do aluno e informar
    se ele está aprovado (media > 6) ou reprovado.
*/

#include <stdio.h>

int main()
{
    int idade[5];
    int i, j, temp; // "temp" vai servir como uma variável auxiliar para trocar dois valores de posição no vetor durante a ordenação (temp - espaço temporário)


    // Ler as idades
    for (i = 0; i < 5; i++)
    {
        printf("escreva a idade %d: ", i + 1);
        scanf("%d", &idade[i]); // %d especificador de formato que indica que o valor a ser impresso é um número inteiro decimal (do tipo int).
    }

    // ordem das idades
    for (i = 0; i < 4; i++) { // ler as numerações dadas até o penúltimo número dado
        for (j = i + 1; j < 5; j++) { // comparação de ambos os números
            if (idade[i] > idade[j]) { // bubble sort, compara dois valores de cada vez e troca de ordem se necessário
                temp = idade[i]; // troca de nmr
                idade[i] = idade[j]; // troca de nmr
               idade[j] = temp; // troca de nmr

            }
        }        
    }
      
        //ordem crescente 
    for (i = 0; i <= 4; i++) // "i <=" n pode ser 5, pois causaria erro de acesso fora do vetor (porque índices vão de 0 a 4)
    {
        printf("%d\n", idade[i]);
    }

    return 0;
}

// gcc teste1.c -o teste1.exe; .\teste1.exe (colocar esse comando no terminal para executar o programa).
