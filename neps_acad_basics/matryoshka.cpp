#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int v[N], aux, count = 0, org[N];

    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j + 1];
                v[j + 1] = v[j];
                org[count] = aux;
                v[j] = aux;
                count++;
            }
        }
    }

    if (count == 0)
    {
        cout << "0\n";
    }
    else
    {
        cout << "Count: " << count << endl;

        for (int i = 0; i < count; i++)
        {
            cout << org[i] << endl;
        }
    }

    return 0;
}