#include <stdio.h>

int main()
{
    int idade[5];
    int i, j, temp;


    // Ler as idades
    for (i = 0; i < 5; i++)
    {
        printf("escreva a idade %d: ", i + 1);
        scanf("%d", &idade[i]);
    }

    // ordem das idades
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (idade[i] > idade[j]) {
                temp = idade[i];
                idade[i] = idade[j];
               idade[j] = temp;

            }
        }        
    }
      
        //ordem crescente 
    for (i = 0; i <= 4; i++)
    {
        printf("%d\n", idade[i]);
    }

    return 0;
}


