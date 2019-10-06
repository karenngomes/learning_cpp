#include <iostream> // cin and cout

using namespace std;

int main()
{

    int n, seq[1000010];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> seq[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << seq[i] << " ";
    }

    cout << "\n";

    return 0;
}
