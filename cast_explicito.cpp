#include <cstdio>

int main() {

    int sum, num = 10;
    float pi = 3.14159;
    // static_cast <tipo> (expressão)
    sum = static_cast <int> (pi) + num;
    
    printf("%d\n", sum);
    // const_cast <tipo> (expressão constante) - retira a "constancia" da variavel
    char * ptr;
    const char * const_ptr;
    ptr = const_cast <char *> (const_ptr);

    return 0;
}