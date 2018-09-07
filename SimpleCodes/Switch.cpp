#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    int num = 5;

    switch(num) {
        case 9:
            cout << "Number 9"<< endl;
            break;
        case 10:
            cout << "Number 10" << endl;
            break;
        default:
            std::cout << "Invalid number." << endl;
    }

    getchar();
    return 0;
}
