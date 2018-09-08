#include <iostream>
#include <cstdio>

using namespace std;

void message(int n){
    cout << "number: " << n << endl;
}

void message (){
    cout << "Hello World" << endl;
}

int main(int argc, char const *argv[])
{

    int num =5;

    message(num);
    message();


    getchar();
    return 0;
}
