#include <iostream>

using namespace std;

int main()
{
    int vetor[5] = {3, 1, 4, 7, 5}, lista[5];

    int menor, ind_menor;

    for (int i = 1; i <= 5; i++)
    {
        menor = 10000000;
        for (int j = 1; j <= 5; j++)
        {
            if (lista[j] == 0 and vetor[j] < menor)
            {
                menor = vetor[j];
                ind_menor = j;
            }
        }
        cout << menor << " ";
        lista[ind_menor] = 1;
        cout << lista[ind_menor] ;
    }

    // cout << lista;

    return 0;
}