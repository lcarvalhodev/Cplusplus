#include <iostream>
#include <cstdio>

using namespace std;

bool even(int num);
void message();

int main(int argc, char const *argv[])
{

    int num;

    message();

    cout << "Enter a number: " << endl;
    cin >> num;

    if(even(num)){
        cout << "Even number" << endl;
    }
    else{
        cout << "Not even." << endl;
    }


    getchar();
    return 0;
}

bool even (int num) {
    if(num % 2 ==0) {
        return true;
    }
    return false;
}

void message(){
    cout << "Test function" << endl;
}