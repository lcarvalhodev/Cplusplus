#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int num = 10;

    if (num > 5 ) {
        if (num == 10) {
            cout << "Number equals 10" << '\n';
        }

        else
            cout << "Number not equals 10" << '\n';
    }
    else
        cout << "Number < 5" << '\n';
    
    getchar();
    return 0;
}
