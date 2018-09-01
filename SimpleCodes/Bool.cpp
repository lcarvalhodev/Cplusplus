#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
    bool var = 10 >20;
    bool var2 = 20 > 10;

    if(var) {
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    if(!var && var2){
        cout << "Var is false and var2 is true" << endl;
    }
    else{   
        cout << "Var is true and var2 is false" << endl; 
    }

    getchar();
    return 0;
}
