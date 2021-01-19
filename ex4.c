///////////////////////////////////////
//                                   //
// Autor: Diego S. Seabra            //
// Matricula: 0040251                //
//                                   //
///////////////////////////////////////

#include <stdio.h>
#include <math.h>

#define n 5

int main()
{
    int potenciaBinaria = pow(2, n);            // custo: 1
    int k;                                      // custo: 1

    printf("%i\n", potenciaBinaria);

    for (int i = 0; i < potenciaBinaria; i++)   // custo: 2^n + 1
    {
        for (int j = n - 1; j >= 0; j--)        // custo: 2^n * (n+1)
        {
            k = i >> j;                         // custo: 2^n * n

            if (k & 1)                          // custo: 2^n * n
                printf("1");                    // custo: 2^n * n
            else                                // custo: 2^n * n
                printf("0");                    // custo: 2^n * n
        }

        if (i != potenciaBinaria - 1)           // custo: 2^n
        {
            printf(" - ");                      // custo: 2^n
        }
    }
    printf("\n");                               // custo: 1
}