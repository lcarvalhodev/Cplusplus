#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{

    // char name[] = {'N','a','m','e'};
    char name[] = "Name";
    int i =0;

    while(name[i]){
        cout << name[i++] << '\n';
    }

    getchar();
    return 0;
}
