/*
    Escreva um programa que leia o nome completo de um aluno e suas 4 notas de matemática.
    O programa deverá calcular a média das notas e por fim imprimir na tela o nome do aluno e informar
    se ele está aprovado (media > 6) ou reprovado.
*/

#include <stdio.h>

int main()
{
    int idade[5];
    int x, z, box; // "box" vai servir como uma variável auxiliar para trocar dois valores de posição no vetor durante a ordenação (box - espaço temporário), como se fosse uma caixinha extra (por isso o box)


    // Ler as idades
    for (x = 0; x < 5; x++)
    {
        printf("escreva a idade %d: ", x + 1); 

        scanf("%d", &idade[x]); // %d especificador de formato que indica que o valor a ser impresso é um número inteiro decimal (do tipo int).
    }

    // ordem das idades
    for (x = 0; x < 4; x++) { // ler as numerações dadas até o penúltimo número dado
        for (z = x + 1; z < 5; z++) { // comparação de ambos os números
            if (idade[x] > idade[z]) { // "bubble sort", compara dois valores de cada vez e troca de ordem se necessário
                box = idade[x]; // troca de nmr
                idade[x] = idade[z]; // troca de nmr
                idade[z] = box; // troca de nmr

            }
        }        
    }
      
        //ordem crescente 
    for (x = 0; x <= 4; x++) // "i <=" n pode ser 5, pois causaria erro de acesso fora do vetor (porque índices vão de 0 a 4)
    {
        printf("%d\n", idade[x]);
    }

    return 0;
}

// gcc teste1.c -o teste1.exe; .\teste1.exe (colocar esse comando no terminal para executar o programa, por causa do mingw2).
