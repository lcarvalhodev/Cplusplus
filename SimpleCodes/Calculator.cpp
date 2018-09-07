/*
    Calculator
    Allowed operations:
    + -> plus
    - -> minus
    / -> div
    * -> multiplication

*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{

    int num1, num2;
    double result;
    char op;
    
    cout << "Enter the first number:" << '\n';
    cin >> num1;

    cout << "Enter the seocond number:" << '\n';
    cin >> num2;

    cout << "Enter the operation:" << '\n';
    cin >> op;

    
    switch (op)
    {
        case '+':
            result = num1 + num2; 
            cout << "Result: " << result <<  endl;
            break;
        case '-':
            result = num1 - num2; 
            cout << "Result: " << result <<  endl;
            break;
        case '/':
            if(num2 == 0){
                cout << "It is not possible to make this operation with zero" << endl;
            }
            else {
                result = num1 / num2;
                cout << "Result: " << result <<  endl; 
            }
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result <<  endl; 
            break;
        
        default:
            cout << "Invalid operation" << endl;
            break;
    }

    getchar();
    return 0;
}
