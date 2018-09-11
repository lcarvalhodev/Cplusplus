#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{

    int *vet = new int[10];

    cout << "Digite um número: " << '\n';
    cin >> *(vet);

    cout << "Digite outro número: " << '\n';
    cin >> *(vet + 1);

    delete [] vet;

    getchar();
    return 0;
}
