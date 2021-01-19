///////////////////////////////////////
//                                   //
// Autor: Diego S. Seabra            //
// Matricula: 0040251                //
//                                   //
///////////////////////////////////////

#include <stdio.h>

#define n 6

// Mesma ideia do Insertion Sort
void funcao3(int A[n])
{
    int aux, i;                         // custo: 1
    for (int j = 2; j < n; j++)         // custo: n
    {
        aux = A[j];                     // custo: n-1
        i = j - 1;                      // custo: n-1

        while (i > 0 && A[i] > aux)     // custo: somatorio (j=3) (n-1) (j)
        {
            A[i + 1] = A[i];            // custo: somatorio (j=3) (n-1) (j-1)
            i = i - 1;                  // custo: somatorio (j=3) (n-1) (j-1)
        }
        A[i + 1] = aux;                 // custo: n-1
    }
}

void imprimeArranjo(int A[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("%i ", A[i]);
    }
    printf("\n");
}

int main()
{
    int A[n] = {31, 41, 59, 26, 41, 58};
    printf("Antes: ");
    imprimeArranjo(A);
    funcao3(A);
    printf("Depois: ");
    imprimeArranjo(A);
}