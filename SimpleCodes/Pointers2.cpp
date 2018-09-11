#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{

    int *vet = new int[10];

    cout << "Enter a number: " << '\n';
    cin >> *(vet);

    cout << "Enter other number: " << '\n';
    cin >> *(vet + 1);

    delete [] vet;
    vet = NULL;

    getchar();
    return 0;
}
