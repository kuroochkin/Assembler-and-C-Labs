#pragma once
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <bitset>
#include <climits>
#include <cstdio>

using namespace std;

void PrintInfo(int p)
{
    cout << "Unsigned hexdecimal: 0x" << hex << p << endl; //16
    cout << "Unsigned binary: " << bitset<16>(p) << endl; //2
    cout << "Unsigned decimal: " << dec << p << endl; // 10
    cout << "Signed hexdecimal: 0x" << hex << p << endl; //16
    cout << "Signed binary: " << bitset<16>(p) << endl; //2
    cout << "Signed decimal: " << dec << p << endl << endl; //10
}

void From16bitIn32bit(int16_t p)
{
    // Расширяем знаковое число до 32 бит
    int32_t signed_extended = static_cast<int32_t>(p);
    PrintInfo(signed_extended);  
    
    // Расширяем беззнаковое число до 32 бит
    uint32_t unsigned_extended = static_cast<uint32_t>(p);
    PrintInfo(unsigned_extended);
}

void AlgebraicOperations(int16_t p)
{
    cout << "Число " << p << endl;

    int16_t p1 = p * 2;
    cout << "Беззнаковое умножение на 2: " << p1 << endl;

    int16_t p2 = p / 2;
    cout << "Беззнаковое деление на 2: " << p2 << endl;

    int16_t p3 = p % 16;
    cout << "Беззнаковое деление по остатку 16: " << p3 << endl;

    p -= p % 16;
    cout << "Округление вниз до числа, кратного 16: " << p << endl << endl;
}

void _AlgebraicOperations(uint16_t p)
{
    cout << "Число " << p << endl;

    uint16_t _p1 = p * 2;
    cout << "Знаковое умножение на 2: " << _p1 << endl;

    uint16_t _p2 = p / 2;
    cout << "Знаковое деление на 2: " << _p2 << endl;

    uint16_t _p3 = p % 16;
    cout << "Знаковое деление по остатку 16: " << _p3 << endl << endl; 
}

void ShiftBits(short x)
{

}

void _ShiftBits(short x)
{

}

