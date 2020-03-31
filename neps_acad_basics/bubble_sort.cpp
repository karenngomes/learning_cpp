#include <iostream>

using namespace std;

int main()
{

    int v[5] = {4, 1, 2, 5, 3}, aux;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (v[j + 1] < v[j])
            {
                aux = v[j + 1];
                v[j + 1] = v[j];
                v[j] = aux;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
       cout << v[i] << endl;
    }
    

    return 0;
}