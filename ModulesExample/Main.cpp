#include <iostream>
#include <cstdio>
#include "My_Math.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int num;

    cout << "Enter the number: " << endl;
    cin >> num;

    cout << "Factorial: " << factorial(num) << endl;
    cout << "Square: " << squares(num) << endl;
    cout << "Cube: " << cube(num) << endl;
    cout << "Square Root: " << squareRoot(num) << endl;

    

    getchar();
    return 0;
}
