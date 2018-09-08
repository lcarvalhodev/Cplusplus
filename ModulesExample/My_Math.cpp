// This module contains math functions

#include <iostream>
#include <cstdio>

using namespace std;

int factorial(int num){
    int fat =1;

    for(int i = 1; i <= num; i++)
    {
        fat = fat * i;
    }

    return fat;
}

int squares(int num) {
    return num * num;
}

int cube(int num) {
    return num * num * num;
}

int squareRoot(int num){

    for (int i = 0; i <= num; i++)
    {
        if (i*i == num) {
            return i;
        }   
    }

    return 0;
}

