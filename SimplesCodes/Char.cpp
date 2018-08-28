#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    char c1 = 'a';
    char c2 = 'b';

    // possible to make char plus char
    int soma = c1+c2;

    // possible to put ' on a char
    char c3 = '\'';

    cout << "Soma de caracteres: " << soma << endl;

    cout << "Caractere com aspa simples: " << c3 << endl;

    getchar();
    return 0;
}
