#include <iostream>
#include <algorithm>
#include <iomanip>

#define MAXN 100100

using namespace std;

struct gas
{
    double preco, estoq;
};

bool compara(gas x, gas y)
{
    return x.preco < y.preco;
}

gas forn[MAXN];

int n;
double d, custo;

int main(int argc, char const *argv[])
{
    cin >> n >> d;

    for (int i = 1; i <= n; i++)
    {
        cin >> forn[i].preco >> forn[i].estoq;
    }

    sort(forn, forn + n + 1, compara);

    for (int i = 1; i <= n; i++)
    {
        gas atual_forn = forn[i];

        if (atual_forn.estoq < d)
        {
            custo += atual_forn.estoq * atual_forn.preco;
            d -= atual_forn.estoq;
        }
        else
        {
            custo += d * atual_forn.preco;
            d = 0;
            break;
        }
    }

    if (d)
    {
        cout << "Impossivel\n";
    }
    else
    {
        cout << fixed << setprecision(2) << custo << endl;
    }

    return 0;
}
