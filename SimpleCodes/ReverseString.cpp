#include <iostream>
#include <cstdio>


using namespace std;

void reverseString( char name[] ){

    int size;
    
    for(size = 0; name[size] ; size++);
    for (int i = size - 1 ; i >= 0 ; i--)
    {
        std::cout << name[i] << '\n';
    } 
}

int main(int argc, char const *argv[])
{
    char name[] = "Name";
    reverseString(name);

    getchar();
    return 0;
}
