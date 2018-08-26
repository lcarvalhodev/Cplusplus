#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{

    int n1 = 10;
    int n2 = 5;
    int resultPlus;
    int resultMinus;
    int resultMult;
    int resultDiv;
    int resultMod;



    //plus
    resultPlus = n1 + n2;
    //minus
    resultMinus = n1 - n2;
    //mult
    resultMult = n1 * n2;
    //div
    resultDiv = n1 / n2;
    //Mod
    resultMod = n1 % n2;
    //incr
    n1++;

    cout << "Plus: " << resultPlus << '\n';
    cout << "Minus: " << resultMinus << '\n';
    cout << "Mult: " << resultMult << '\n';
    cout << "Div: " << resultDiv << '\n';
    cout << "Mod: " << resultMod << '\n';
    cout << "Incr: " << n1 << '\n';

    getchar();
    return 0;
}
