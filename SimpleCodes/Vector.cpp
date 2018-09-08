#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{

    int vector[100];

    for(int i = 0; i < 100; i++)
    {
        vector[i] = i;
    }

    
    for(int i = 0; i < 100; i++)
    {
        cout << vector[i] << endl;
    }
    

    getchar();
    return 0;
}
