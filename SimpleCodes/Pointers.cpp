#include <iostream>
#include <cstdio>

using namespace std;

void changeValue(int *n) {
    *n = 20;
}
int main(int argc, char const *argv[]){
    int n =10;
    int* pn;

    pn = &n;

    changeValue(pn);
    // changeValue(&n);

    cout << n << endl;

    getchar();
    return 0;  
}
