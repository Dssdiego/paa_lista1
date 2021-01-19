///////////////////////////////////////
//                                   //
// Autor: Diego S. Seabra            //
// Matricula: 0040251                //
//                                   //
///////////////////////////////////////

#include <stdio.h>

int funcao2(n)
{
    int soma = 0;                               // custo: 1  
    for (int i = 0; i <= n - 1; i++)            // custo: n+1 
    {
        // printf("for1\n");
        for (int j = 0; j <= n - 1; j++)        // custo: n * n+1
        {
            // printf("for2\n");           
            for (int x = 0; x <= n - 1; x++)    // custo: n * n * n+1
            {
                // printf("for3\n");           
                soma = soma + (n - 1);          // custo: n * n * n
            }
        }
    }

    return soma;                                // custo: 1 
}

int main()
{
    int soma = funcao2(2);
    printf("%i\n", soma);
}