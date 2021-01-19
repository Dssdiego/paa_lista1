///////////////////////////////////////
//                                   //
// Autor: Diego S. Seabra            //
// Matricula: 0040251                //
//                                   //
///////////////////////////////////////

#include <stdio.h>

int funcao1(int A[], int n, int x)
{
    int y = 0;                        // custo: 1
    for (int k = n; k > 0; k--)       // custo: n+1
    {
        y = A[k] + y * x;             // custo: n
    }
    return y;                         // custo: 1
}

int main()
{
    int A[5] = { 3, 2, 3, 4, 5}; 
    int res = funcao1(A,2,5);
    printf("%i\n",res);
}