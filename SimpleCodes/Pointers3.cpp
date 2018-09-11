#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{

    // int vet[] = {1,2,3,4,5};
    // int* pvet = &vet[0];
    // int **ppvet = &pvet;
    // int i = 0;

    // cout << **ppvet << endl;

    char name [100];
    int size;
    char *pname;
    char *pst;

    cout << "Enter a name: " << '\n';
    cin >> name;

    size= strlen(name);
    pname = &name[size];
    pst = &name[0];

    while(pname >= pst){
        cout << *pname;
        pname--;
    }
    cout << endl;

    getchar();
    return 0;
}
