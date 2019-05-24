#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int value;
    cin >> value;
    float total = value * 1.10;
    std::cout << std::setprecision(2) << std::fixed;
    cout << total << std::endl;

    return 0;
}