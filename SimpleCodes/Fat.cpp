/*
    Factorial program
    0! = 1! = 1
    2! = 2 * 1 = 2
    3! = 3 * 2 * 1 = 6 
    4! = 4 * 3 * 2 * 1 = 24
    5! = 5 * 4 * 3 * 2 * 1 = 120
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    double fat = 1;

    cout << "Enter the number: " << '\n';
    cin >> num;

    
    for(int i = 1; i <= num; i++)
    {
        fat = fat * i;
    }
    
    cout << "Factorial: " << fat << endl;
    
    getchar();
    return 0;
}
