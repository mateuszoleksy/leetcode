/******************************************************************************

                            Podstawy podstaw programowania
                            Programowanie w C++
                            Autor: Mateusz Oleksy
                            Data: 2025-04-19
                            Opis: Program oblicza n-ty wyraz ciagu Fibonacciego
                            przy pomocy rekurencji.
                            Uzywa funkcji high_resolution_clock do pomiaru czasu
                            wykonania.
                            Wersja: 1.0
                            
*******************************************************************************/


#include <iostream>
#include <chrono>
#include <cmath>
#include "fibonacci.h"

using namespace std;
using namespace chrono;

int main()
{
    long double ile;
    std::cout<<"Podaj wyraz ciagu fibonacciego: " << endl;
    cin >> ile;
    auto start = high_resolution_clock::now();
    cout << "Oto wynik: " << fibonacci(0,1,ile) <<endl;
    auto stop = high_resolution_clock::now();
    cout << "Tic toc time: " << duration_cast<microseconds>(stop-start).count() << " ms" << endl;
    return 0;
}