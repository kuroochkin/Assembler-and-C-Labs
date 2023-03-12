#pragma once
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <bitset>
#include <climits>
#include <cstdio>

using namespace std;

void From16bitIn32bit(int16_t p)
{
    if(p < 0)
    {
        // Расширяем знаковое число до 32 бит
        int32_t signed_extended = static_cast<int32_t>(p);

        cout << "Unsigned hexdecimal: 0x" << hex << signed_extended << endl; //16
        cout << "Unsigned binary: " << bitset<16>(signed_extended) << endl; //2
        cout << "Unsigned decimal: " << dec << signed_extended << endl; // 10
        cout << "Signed hexdecimal: 0x" << hex << signed_extended << endl; //16
        cout << "Signed binary: " << bitset<16>(signed_extended) << endl; //2
        cout << "Signed decimal: " << dec << signed_extended << endl << endl; //10
    }
    else
    {
        // Расширяем беззнаковое число до 32 бит
        uint32_t unsigned_extended = static_cast<uint32_t>(p);
        
        cout << "Unsigned hexdecimal: 0x" << hex << unsigned_extended << endl; //16
        cout << "Unsigned binary: " << bitset<16>(unsigned_extended) << endl; //2
        cout << "Unsigned decimal: " << dec << unsigned_extended << endl; // 10
        cout << "Signed hexdecimal: 0x" << hex << unsigned_extended << endl; //16
        cout << "Signed binary: " << bitset<16>(unsigned_extended) << endl; //2
        cout << "Signed decimal: " << dec << unsigned_extended << endl << endl; //10
    }
}