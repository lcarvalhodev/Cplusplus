#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int num = 11;

    if (num % 2 == 0 ) {
            cout << "Number even" << '\n';
    }
    else
        cout << "Number odd" << '\n';

    if(num%2==0 && num ==10){
        cout << "Even number and equals 10" << '\n';
    }
    
    getchar();
    return 0;
}
