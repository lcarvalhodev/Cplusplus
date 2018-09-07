#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{

    int num =1;

    
    while(num <= 100){
        
        if(num%2 != 0){
            num ++;
            continue;
        }

        cout << num << endl;
        num ++;
    }
    

    getchar();
    return 0;
}
